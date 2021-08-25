#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

int n = 1e6 + 1;
vector<bool> is_prime(n + 1, true);

void build()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

bool check(int n)
{
    int a = sqrt(n);
    return (a * a == n and is_prime[a]);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    build();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    cout.flush();
    return 0;
}