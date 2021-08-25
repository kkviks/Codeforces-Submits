#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }
        else
            cout << "YES\n";
        int e = 2;
        int sum = 0;
        for (int i = 0; i < n / 2; i++)
        {
            cout << e << " ";
            sum += e;
            e += 2;
        }
        int o = 1;
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << o << " ";
            sum -= o;
            o += 2;
        }
        cout << sum;
        cout << endl;
    }
}