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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m[x]++;
        }

        int count = 0;

        for(auto i:m){
            int n = i.second;
            count += n*(n-1);
        }
        cout << count << endl;
    }

    cout.flush();
    return 0;
}