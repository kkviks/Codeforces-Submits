#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

unordered_set<int> s;

void solve()
{

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin  >> n >> k;
        int temp; 
        int maxNum = INT_MIN;
        for(int i=0;i<n;i++){
            cin >> temp;
            maxNum = max(maxNum,temp);
            s.insert(temp);
        }
        int x;
        int y = maxNum;
        for(int i=0;i<=1e9;i++){
            if(s.count(i)==0){
                x = i; 
                break;
            }
        }

        int val = (x+y)/2;
        int ans = -1;
        if(s.count(val)==1){
            ans = s.size();
        }else{
            s.insert(val);
            ans = s.size();
        }
        cout << ans << endl;
    }

    cout.flush();
    return 0;
}