#include <bits/stdc++.h>
#include <map>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define pi pair<int, int>
#define sqr(x) x *x;
#define mp make_pair

int n, m;
unordered_map<char, vector<int>> x, y;
unordered_map<char, int> dp;

double distanceHelper(int x1, int y1, int x2, int y2)
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

double distance(vector<int> &xch, vector<int> &ych)
{
    double dist = INT_MAX;
    for (int i = 0; i < xch.size(); i++)
    {
        for (int j = 0; j < x['S'].size(); j++)
        {
            double dist1 = distanceHelper(xch[i], ych[i], x['S'][j], y['S'][j]);
            dist = min(dist1, dist);
        }
    }
    return dist;
}

void solve(int q, unordered_map<char, vector<int>> &x, unordered_map<char, vector<int>> &y, bool shift, double d)
{
    char ch;
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < q; i++)
    {
        ch = s[i];
        if (isupper(ch) and shift == false)
        {
            cout << -1;
            return;
        }
        bool upper = isupper(ch);
        ch = tolower(ch);
        if (x.count(ch) == 0)
        {
            cout << -1;
            return;
        }
        if (upper)
        {
            double dist;
            if (dp.count(ch) == 1)
                dist = dp[ch];
            else
            {
                dist = distance(x[ch], y[ch]);
                dp[ch] = dist;
            }
            if (dist > d)
                cnt++;
        }
    }
    cout << cnt;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    double d;
    cin >> n >> m >> d;
    bool shift = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'S')
                shift = true;
            x[ch].pb(i);
            y[ch].pb(j);
        }
    }
    int len = 0;
    cin >> len;
    solve(len, x, y, shift, d * d);

    cout.flush();
    return 0;
}