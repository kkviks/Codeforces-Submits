#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m,k;
    cin >> n >> m >> k;

    int num = -1;
    while(k--){
        if(n>m){
            num  = n*m;
            n--;
        }
        else if(m>n){
            num = n*m;
            m--;
        }
        else{
            num = n*m;
            m--;
        }
    }
    cout << num;
    cout.flush();
    return 0;
}