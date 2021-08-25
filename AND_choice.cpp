#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

int check(int *c, int n, int p) {
   int cnt = 0;
   for (int i = 0; i < n; ++i) {
      if ((p & c[i]) == p) {
         ++cnt;
      }
   }
   return cnt;
}
int maxAND(int b[], int n) {
   int res = 0;
   int cnt;
   for (int i = 31; i >= 0; --i) {
      cnt = check(b, n, res | (1 << i));
      if (cnt >= 2) {
         res |= (1 << i);
      }
   }
   return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxAND(a,n);
    cout.flush();
    return 0;
}