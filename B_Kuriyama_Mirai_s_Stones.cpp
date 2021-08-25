#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int input;
    int v[n],u[n];
    int o=0;
    for(int i=0;i<n;i++){
        cin >> input;
        o+=input;
        v[i]=o;
        u[i]=input;
    }
    sort(u,u+n);
    for(int i=1;i<n;i++){
        u[i]+=u[i-1];
    }

    int m;
    cin >> m;
    while(m--){
        int q,l,r;
        cin >> q >> l >> r;
        l--,r--;
        switch(q){
            case 1: 
                if(l==0)cout << v[r] << endl;
                else cout << v[r] - v[l-1] << endl;
                break;
            case 2:
            if(l==0)cout << u[r] << endl;
            else cout << u[r] - u[l-1] << endl;
            break;
        }
    }

    cout.flush();
    return 0;
}