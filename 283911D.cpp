#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
 

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int k;
    cin >> k;
    while(k--){
        int l,r;
        cin >> l >> r;
        int f = upper_bound(v.begin(),v.end(),r)-v.begin();
        int i = lower_bound(v.begin(),v.end(),l)-v.begin();
        int ans = f-i;
        cout << i << " " << f << endl;
    }

    cout.flush();
    return 0;
}