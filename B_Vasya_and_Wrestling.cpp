#include <bits/stdc++.h>
using namespace std;

bool solve()
{

    const bool FIRST = false, SECOND = true;

    int n;
    cin >> n;

    vector<int> w1, w2;
    long long c1 = 0, c2 = 0;

    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            c1 += x;
            w1.push_back(x);
        }
        else
        {
            c2 += abs(x);
            w2.push_back(abs(x));
        }
    }

    if (c2 > c1)
        return SECOND;
    else if (c1 > c2)
        return FIRST;
    else
    {

        int size1 = w1.size();
        int size2 = w2.size();

        for (int i = 0; i < min(size1, size2); i++)
        {
            if (w1[i] > w2[i])
                return FIRST;
            else if (w2[i] > w1[i])
                return SECOND;
            else
                continue;
        }

        if (size1 > size2)
            return FIRST;
        else if (size2 > size1)
            return SECOND;
        else
        {
            if (x > 0)
                return FIRST;
            else 
                return SECOND;
        }
    }
    return SECOND;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    bool secondWon = solve();

    cout << (secondWon ? "second" : "first");
    return 0;
}