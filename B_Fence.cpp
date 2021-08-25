#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,k;
    cin >> n >> k;

    vector<int> dp(n,INT_MAX);
    int a[n];
    int o,j=0,sum=0;
    for(int i=0;i<n;i++){
        cin >> o;
        a[i]=o;
        if(i<k-1)sum+=o;
        else if(i==k-1)dp[j++]=sum+o;
        else {
            dp[j]=dp[j-1]-a[j-1]+o;
            j++;
        }
    }
    cout << min_element(all(dp))-dp.begin()+1;
    cout.flush();
    return 0;
}