#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int i = 1;
    while (true)
    {
        int amount = i * k;
        if (amount % 10 == 0 or (amount - r) % 10 == 0)
            break;
        i++;
    }
    cout << i;
    return 0;
}