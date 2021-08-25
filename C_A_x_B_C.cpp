#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    int cnt=0;
    for(int i=1;i<N;i++){
        cnt+=(N-1)/i;
    }
    cout << cnt;
    cout.flush();
    return 0;
}