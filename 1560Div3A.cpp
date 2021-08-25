#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output,vector<int> &subs)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty()) {
        if(output.size()){
            subs.push_back(stoi(output));
        }
        return;
    }
 
    // output is passed with including
    // the Ist characther of
    // Input string
    printSubsequence(input.substr(1), output + input[0],subs);
 
    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output,subs);
}

int f(int n){
    int s = 0;
    while(n){
        s += n%10;
        n/= 10;
    }
    return s;
}

void solve(int i){
    vector<int> subs;
    printSubsequence(to_string(i),"",subs);

    int sum = 0;
    for(int n:subs){
        sum += f(n);
    }
    if(sum%2==0){
        cout << i << " ";
    }
}

int main()
{

    for(int i=1;i<100;i++){
        solve(i);
    }

    return 0;
}

