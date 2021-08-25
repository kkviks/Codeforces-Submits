#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    int x,y;
    if(n==1){
        cin >> x >> y;
        if(x&1 or y&1)cout << -1;
        else cout << 0;
        return 0;
    }
    int l=0,r=0;
    int sumX=0,sumY=0; 
    while(n--){
        cin >> x >> y;
        if((x&1)^(y&1)){
            l+=x&1; r+=y&1;
        }
        else sumX+=x,sumY+=y;
        
    }
    if((sumX%2!=0 or sumY%2!=0) and !l and !r){
        cout << -1;
    }
    else if(abs(l-r)%2!=0)cout << -1;
    else{
        l<r?swap(l,r):swap(l,r),swap(l,r);
        int ans = r + (l-r)/2;
        cout << ans;
    }

    cout.flush();
    return 0;
}