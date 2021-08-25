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

    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0;i<n;i++){
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<bool> visited(n+1,true);
    visited[0]=true;

    int src=1;
    

    cout.flush();
    return 0;
}