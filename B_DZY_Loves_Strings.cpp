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

    string s;
    cin >> s;
    int k;
    cin >> k;

    int a[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    int i = 1;
    for (auto ch : s)
    {
        int idx = ch - 'a';
        ans += a[idx] * i;
        i++;
    }

    int factor = *max_element(a, a + 26);
    int j = i;
    for (int i = 0; i < k; i++, j++)
    {
        ans += factor * j;
    }
    cout << ans;
    cout.flush();
    return 0;
}