#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

int digit[]={0,1,2,3,4,5,6,7,8,9};

int number(vector<int> &a){
    int num = 0;
    for(auto i:a){
        if(i==-1)return -1;
        num = num*10+i;
    }
    return num;
}

void solve(vector<int> &a){
    if(number(a)!=-1)return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int m,s;
    cin >> m >> s;

    vector<int> a(m);
    solve(a);

    cout.flush();
    return 0;
}