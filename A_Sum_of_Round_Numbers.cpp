#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int temp = n;
    int count = 0;
    while (temp)
    {
        if (temp % 10 != 0)
            count++;
        temp /= 10;
    }
    cout << count << endl;
    int curr = 0;
    while (n)
    {
        curr++;
        if (n % 10 != 0)
            cout << (n % 10) * (int)pow(10, curr - 1) << " ";
        n /= 10;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}