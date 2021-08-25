#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int up = n/2 - count(all(s),'X');
    int down = n/2 - count(all(s),'x');
    
    up = abs(up);
    down = abs(down);

    for(int i=0;i<n;i++){
        if(down>0 and isupper(s[i])){
            tolower(s[i]); down--; up++;
        }
        if(up>0 and islower(s[i])){
            toupper(s[i]);up--; down++;
        }
    }
    cout << up+down << endl;
    cout << s;
    cout.flush();
    return 0;
}