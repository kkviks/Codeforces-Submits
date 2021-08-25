#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    double distance = vp * t;
    int cnt = 0;
    double time = 0;
    
    if (vp >= vd)
    {
        cout << 0;
        return 0;
    }

    while (distance < c)
    {
        time = distance / (vd - vp); 
        distance += vp * time;
        if (distance >= c)
            break;
        cnt++;
        time = distance / vd;
        time += f;
        distance+=vp*time;
    }

    cout << cnt;
    cout.flush();
    return 0;
}