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

    int n;
    cin >> n;

    map<string, int> m;
    vector<pair<string, int>> v;

    while (n--)
    {
        string name;
        int score;
        cin >> name >> score;
        if (m.count(name) == 0)
            m[name] = score;
        else
            m[name] += score;
        v.push_back({name, score});
    }

    int mx = INT_MIN;
    for (auto i : m)
    {
        mx = max(mx, i.second);
    }

    vector<string> names;
    for (auto i : m)
    {
        if (i.second == mx)
            names.pb(i.first);
    }

    vector<int> loc;
    for (auto name : names)
    {
        int score = 0;
        int j = 0;
        for (auto i : v)
        {
            if (i.first == name)
                score += i.second;
            if (score >= mx)
                break;
            j++;
        }
        loc.pb(j);
    }

    int min_idx = min_element(all(loc)) - loc.begin();
    string ans = names[min_idx];
    cout << ans;

    cout.flush();
    return 0;
}