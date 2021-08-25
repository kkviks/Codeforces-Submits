#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int m = 1e9+7;

long long binpow(long long a, long long b, long long m) {
    if(b<=0)return 1;
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans = (ans*i)%m;
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int ans = (n%m)*((n-1)%m);
    int z = binpow(10,n-2,m)%m;
    ans = (ans*z)%m;
    ans = ((((ans%m)*2)%m)*fact(n-2))%m;

    cout << ans;
    cout.flush();
    return 0;
}