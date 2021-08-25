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

    stack<char> stack;
    int cnt = 0;
    for (auto ch : s)
    {
        if (ch == '(')
            stack.push('(');
        else if (ch == ')')
        {
            if (!stack.empty())
            {
                cnt++;
                stack.pop();
            }
            else
                continue;
        }
    }
    int ans = 2 * cnt;
    cout << ans;
    cout.flush();
    return 0;
}