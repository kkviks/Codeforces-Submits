#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    int n;
    cin >> n;
    int r, a, b;

    map<pair<int, int>, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> r >> a >> b;
        for (int i = a; i <= b; i++)
        {
            m[{r, i}] = -1;
        }
    }

    m[{sx, sy}] = 0; 
    queue<pair<int, int>> q;
    q.push({sx, sy});

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    while (!q.empty())
    {
        pair<int, int> u = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            pair<int, int> v = {u.first + dx[i], u.second + dy[i]};
            if (m.count(v) == 1 and m[v] == -1)
            {
                m[v] = m[u] + 1;
                q.push(v);
            }
        }
    }

    cout << m[{ex, ey}];
    cout.flush();
    return 0;
}