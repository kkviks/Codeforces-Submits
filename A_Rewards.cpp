#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a1,a2,a3;
    int b1,b2,b3;
    cin >> a1 >> a2 >> a3;
    int a = a1 + a2 + a3;
    cin >> b1 >> b2 >> b3;
    int b = b1 + b2 + b3;

    int n_a=a/5+!!(a%5);
    int n_b=b/10+!!(b%10);

    int n;
    cin >> n;

    if(n_a+n_b<=n)cout << "YES";
    else cout << "NO";
    cout.flush();
    return 0;
}