#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve(int n)
{
    map<int, int> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a[i] = input;
        m[input]++;
    }
    int min_number = INT_MAX;
    for (auto i : m)
    {
        int number = i.first;
        int frequency = i.second;
        if (frequency == 1)
        {
            min_number = min(number, min_number);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_number)
        {
            cout << i + 1;
            return;
        }
    }
    cout << -1;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }

    cout.flush();
    return 0;
}