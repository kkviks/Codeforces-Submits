#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m;
    cin >> n >> m;

    int a[n][m];
    int b[m];
    bool c[n];

    string s[n];
    for(int i=0;i<n;i++)cin >> s[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=s[i][j]-'0';
        }
    }

    for(int j=0;j<m;j++){
        int mx=0;
        for(int i=0;i<n;i++){
            mx = max(mx, a[i][j]);
        }
        b[j]=mx;
    }
    
    for(int i=0;i<n;i++){
        c[i]=false;
        for(int j=0;j<m;j++){
            if(a[i][j]==b[j]){
                c[i]=true;
                break;
            }
        }
    }
    cout << count(c,c+n,true);

    cout.flush();
    return 0;
}