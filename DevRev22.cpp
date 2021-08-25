#include<bits/stdc++.h>
using namespace std;

bool isPeli(string s){
    string t = s;
    reverse(s.begin(),s.end());
    return t==s;
}

vector<string> generatePalindromes(string characterSet){
    string s = characterSet;
    set<string> set;

    while(next_permutation(s.begin(), s.end())){
        if(isPeli(s))
            set.insert(s);
    }

    vector<string> ans;
    for(string x:set){
        ans.push_back(x);
    }

    return ans;
}

int main(){
    vector<string> ans = generatePalindromes("ababb");
    for(string x:ans)
        cout << x << endl;
}