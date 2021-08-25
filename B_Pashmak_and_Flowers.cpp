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

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int diff = a[n-1]-a[0];

    int oo=0,o=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[0])oo++;
        if(a[i]==a[n-1])o++;
    }
    if(diff==0)cout << diff << " " << n*(n-1)/2;
    else cout << diff << " " << oo*o;

    cout.flush();
    return 0;
}