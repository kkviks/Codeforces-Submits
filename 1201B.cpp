#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    priority_queue<pair<int,int>> pq;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        pq.push(x);
    }

    int max = pq.top();
    pq.pop();
    bool flag = true;
    while (pq.size() and flag)
    {
        int top = pq.top();
        pq.pop();
        max -= top;
        assert(max >= 0);
        if (max > 0)
        {
            pq.push(max);
            max = pq.top();
            pq.pop();
        }
        else if (max == 0)
        {
            if (pq.size() >= 2)
            {
                max = pq.top();
                pq.pop();
            }
            else if (pq.size() == 1)
            {
                flag = false;
                break;
            }
        }
    }

    string ans = flag and max==0? "YES" : "NO";
    cout << ans;

    cout.flush();
    return 0;
}