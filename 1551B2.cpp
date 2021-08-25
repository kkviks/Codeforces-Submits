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

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, list<int>> m;
        unordered_set<int> set;
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            if (m[v[i]].size() < k)
                m[v[i]].push_back(i);
            set.insert(i);
        }

        //cout << "Count: " << m.count(1) << endl;

        int color = 0;
        for (auto p : m)
        {
            for (int idx : p.second)
            {
                v[idx] = color % k + 1;
                color++;
                set.erase(idx);
            }
        }

        for (int idx : set)
            v[idx] = 0;

        //cout << "Last color: " << (k+color-1) % k+1 << " k= " << k << endl;
        if ((k + color - 1) % k + 1 != k)
        {
            for (int c = (k + color - 1) % k + 1; c >= 1; c--)
            {
                for (int i = 0; i < n; i++)
                {
                    if (v[i] == c)
                    {
                        v[i] = 0;
                        break;
                    }
                }
            }
        }

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    cout.flush();
    return 0;
}