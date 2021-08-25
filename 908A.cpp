#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
 

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;
    unordered_set<char> set({'a', 'e', 'i', 'o' , 'u','1','3','5','7','9'});

    int cnt = 0;
    for(char ch:s){
        cnt += set.count(ch);
    }
    cout << cnt;
    cout.flush();
    return 0;
}