#include<bits/stdc++.h>
using namespace std;

class Tracker{
    unordered_map<string,set<int>> m;
    public:
    string allocate(string hostType){
        int i = 1;

        for(int curr:m[hostType]){
            if(curr==i)i++;
            else break;
        }

        m[hostType].insert(i);
        string ans = hostType + to_string(i);
        cout << ans << " ";
        return ans;
    }

    void deallocate(string hostname){
        string hostType = "";
        int num = 0;
        for(char ch:hostname){
            if(ch>='0' and ch<='9')
                num = num*10 + (ch-'0');
            else 
                hostType += ch;
        }

        m[hostType].erase(num);
    }
};

int main(){
    Tracker tracker;
    tracker.allocate("apibox");
    tracker.allocate("apibox");
    tracker.allocate("apibox");
    

    tracker.deallocate("apibox1");
    tracker.deallocate("apibox1");
    tracker.allocate("apibox");
    tracker.allocate("sitebox");
}