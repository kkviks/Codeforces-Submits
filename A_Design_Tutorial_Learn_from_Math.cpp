#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 1e6;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    cin >> n;
    for (int i = n-4; i >= 4; i--)
    {
        if (!is_prime[i] && !is_prime[n - i])
        {
            cout << i << " " << n - i;
            break;
        }
    }
}