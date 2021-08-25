#include <bits/stdc++.h>
using namespace std;

int pos, neg, x, y;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        pos += x > 0;
        neg += x < 0;
    }
    if (pos <= 1 or neg <= 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}