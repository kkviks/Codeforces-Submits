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

void solve()
{
    int n;
    cin >> n;
    int count[5] = {0};

    map<char, priority_queue<int>> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int> temp(5, 0);
        for (char ch : s)
        {
            count[ch - 'a']++;
            temp[ch - 'a']++;
        }
        int max_idx = max_element(temp.begin(), temp.end()) - temp.begin();
        char max_char = 'a' + max_idx;
        int max_freq = temp[max_idx];
        int z = 0;
        for (int i = 0; i < 5; i++)
        {
            if (temp[i] == max_freq)
                z++;
        }
        if (z == 1)
            m[max_char].push(max_freq);
    }

    priority_queue<pair<int, char>> pq;
    for (int i = 0; i < 5; i++)
    {
        pq.push({count[i], i + 'a'});
    }

    int cnt = 0;
    auto top = pq.top();
    pq.pop();
    while (top.first == pq.top().first)
    {
        cnt--;
        //if(top.first > pq.top().first-m[pq.top().second].top())break;
        //else{
        auto front = pq.top();
        pq.pop();

        if (!m[front.second].empty())
        {
            pair<int, char> p = {front.first - m[front.second].top(), front.second};
            m[front.second].pop();
            pq.push(p);
        }
        //}
    }

    cout << n - cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    cout.flush();
    return 0;
}