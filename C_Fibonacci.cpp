#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int m = 1000000007;
void matmult(long long a[][2], long long b[][2], long long c[][2]) //multiply matrix a and b. put result in c
{
    int i, j, k;
    for (i = 0; i & lt; 2; i++)
    {
        for (j = 0; j & lt; 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k & lt; 2; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]);
                c[i][j] = c[i][j];
            }
        }
    }
}
void matpow(long long Z[][2], int n, long long ans[][2])
{
    long long temp[2][2];
    ans[0][0] = 1;
    ans[1][0] = 0;
    ans[0][1] = 0;
    ans[1][1] = 1;
    int i, j;
    while (n & gt; 0)
    {
        if (n & amp; 1)
        {
            matmult(ans, Z, temp);
            for (i = 0; i & lt; 2; i++)
                for (j = 0; j & lt; 2; j++)
                    ans[i][j] = temp[i][j];
        }
        matmult(Z, Z, temp);
        for (i = 0; i & lt; 2; i++)
            for (j = 0; j & lt; 2; j++)
                Z[i][j] = temp[i][j];
        n = n / 2;
    }
    return;
}
long long fib(long long n)
{
    long long fib;
    if (n & gt; 2)
    {
         int Z[2][2] = {{1, 1}, {1, 0}}, result[2][2]; //modify matrix a[][] for other recurrence relations
        matpow(Z, n - 2, result);
        fib = result[0][0] * 1 + result[0][1] * 0; //final multiplication of Z^(n-2) with the initial terms of the series
    }
    else fib = n - 1;
    return fib;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int ans = fib(n);
    cout << ans;

    cout.flush();
    return 0;
}