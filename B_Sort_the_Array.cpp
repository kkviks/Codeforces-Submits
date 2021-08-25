#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

void solve(int n, int l, int r, int a[], int b[])
{
    if (l == r)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
        return;
    }
    reverse(a + l, a + r + 1);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "no";
            return;
        }
    }
    cout << "yes" << endl;
    cout << ++l << " " << ++r;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);
    int l = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            l = i;
            break;
        }
    }
    int r = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i - 1] > a[i])
        {
            r = i;
            break;
        }
    }

    solve(n, l, r, a, b);

    cout.flush();
    return 0;
}