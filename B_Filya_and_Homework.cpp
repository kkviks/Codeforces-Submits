#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

bool solve(set<int> s)
{
    int sz = s.size();

    if (sz == 1)
        return true;
    if (sz > 3)
        return false;
    vector<int> v;
    for (auto i : s)
        v.pb(i);
    sort(all(v));
    if (sz == 2)
        return true;
    else
        return v[1] - v[0] == v[2] - v[1];
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    set<int> s;
    int n;
    cin >> n;

    for (int i = 0, j; i < n; i++)
    {
        cin >> j;
        s.insert(j);
    }
    bool ans = solve(s);
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    cout.flush();
    return 0;
}