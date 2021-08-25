#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int misha_score = max(3 * a / 10, a - a * c / 250);
    int vasya_score = max(3 * b / 10, b - b * d / 250);

    if (misha_score > vasya_score)
        cout << "Misha";
    else if (vasya_score > misha_score)
        cout << "Vasya";
    else
        cout << "Tie";
    cout.flush();
    return 0;
}