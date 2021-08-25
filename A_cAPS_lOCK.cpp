#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    auto check = [&](string s) {
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]) and i != 0)
                return false;
        }
        return true;
    };

    auto changeCase = [&](string s) {
        string newS = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
                newS += toupper(s[i]);
            else
                newS += tolower(s[i]);
        }
        return newS;
    };

    if (check(s))
    {
        cout << changeCase(s);
    }
    else cout << s;

    cout.flush();
    return 0;
}