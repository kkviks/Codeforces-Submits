#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a,b;
    cin >> a >> b;
    
    int i=1; int amount=1;
    while(a>=0 and b>=0){
        if(i&1){
            a-=amount;
        }
        else b-=amount;
        i++; amount++;
    }
    if(b<0)cout << "Valera";
    else cout << "Vladik";
    cout.flush();
    return 0;
}