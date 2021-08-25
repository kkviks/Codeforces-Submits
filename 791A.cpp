#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)


auto input = [](auto&&... args) { (cin >> ... >> args); };
auto out = [](auto&&... args) { (cout << ... << args); };

double a,b;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input(a,b);
    int n = 1+log10(b/a)/log10(1.5);
    out(n);
    cout.flush();
    return 0;
}