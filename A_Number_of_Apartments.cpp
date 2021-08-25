#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve(int n){
    if(n==1 or n==2 or n==4)cout << -1;
    else if(n%3==0)cout << n/3 << " " << 0 << " " << 0;
    else if(n%3==1)cout << (n-7)/3 << " " << 0 << " " << 1;
    else cout << (n-5)/3 << " " << 1 << " " << 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }

    cout.flush();
    return 0;
}