#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m; char ch;
    cin >> n >> m >> ch;

    char a[n][m];
    map<char,char> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j]; 
            m.insert( {a[i][j],'+'});
        }
    }
    int cnt=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==ch){
                if(i!=0 and i!=n-1){
                    char ch1=a[i-1][j], ch2=a[i+1][j];
                    if(ch1!=ch and ch!='.' and m[ch]!='-')
                }
            }
        }
    }
    

    cout.flush();
    return 0;
}