#include <bits/stdc++.h>
using namespace std;

int a, b, c;
unordered_map<int, int> m;

int maxCuts(int n)
{

    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    if (m.count(n))
        return m[n];

    int smallOutput1, smallOutput2, smallOutput3;

    if (m.count(n - a))
        smallOutput1 = m[n - a];
    else
        smallOutput1 = maxCuts(n - a);

    if (m.count(n - b))
        smallOutput2 = m[n - b];
    else
        smallOutput2 = maxCuts(n - b);

    if (m.count(n - c))
        smallOutput3 = m[n - c];
    else
        smallOutput3 = maxCuts(n - c);

    int smallAns = max({smallOutput1, smallOutput2, smallOutput3});
    if (smallAns == -1)
    {
        m[n] = -1;
        return -1;
    }

    int ans = 1 + smallAns;

    m[n] = ans;
    
    return ans;
}

int main()
{

    int n;
    cin >> n;

    cin >> a >> b >> c;

    int ans = maxCuts(n);
    cout << ans;
}