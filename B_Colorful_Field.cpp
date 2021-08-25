#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb push_back

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m,k,t;
    cin >> n >> m >> k >> t;
    string ans[] ={"Carrots","Kiwis","Grapes"};
    vector<int> j;

    int q=k;
    while(q--){
        int a, b;
        cin >> a >> b;
        int i = (a-1)*m+b;
        j.pb(i);
    }
    sort(all(j));
    while(t--){
        int a,b;
        cin >> a >> b;
        int i=(a-1)*m+b;
        int cnt=0;
        if(count(all(j),i)!=0)cout << "Waste\n";
        else{
            int cnt=0;
            for(auto k:j){
                if(k<i)cnt++;
                else break;
            }
            i=i-cnt;
            i--;
            cout << ans[i%3] << endl;
        }
    }
    cout.flush();
    return 0;
}
