#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;
    int n = s.length();
    if(s[n-1]!='s')cout << s << "s";
    else cout << s << "es";

    return 0;
}