#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int r[2000001]={0};
vector<int> l[2000001];
vector<int> ans;
bool vis[200007];

class Graph{
    int V;
public:
    Graph(int v){
        V=v;
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void bfs(int src){
        queue<int> q;		
	    q.push(1);	
	    memset(vis,false,sizeof(vis));
	    while(!(q.empty())){
		    queue<int> temp;
		    while(!(q.empty())){
			    int x= q.front();
			    q.pop();
			    ans.push_back(x);
			    vis[x]=true;
			    for(int j=0;j<l[x].size();j++)
				    if(vis[l[x][j]]==false)
					    temp.push(l[x][j]);
			    }
		    q=temp;			
	    }
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout << i << "->";
            for(int j:l[i])
                cout << j << ",";
            cout << endl;
        }
    }
};

bool compare(int a,int b){
    return r[a] < r[b];
}

bool ok(int check[],int n){
    for(int i=0;i<n;i++){
        if(ans[i]!=check[i])return false;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    Graph  g(n+1);
    int x,y;
    for(int i=0;i<n-1;i++){
        cin >> x >> y;
        g.addEdge(x,y);
    }

    int check[n];
    for(int i=0;i<n;i++){
        cin >> check[i];
        r[check[i]]=i;
    }

    for(int i=1;i<=n;i++){
        sort(l[i].begin(),l[i].end(),compare);
    }
    g.bfs(check[0]);
    bool ans = ok(check,n);
    cout << (ans ? "Yes":"No");

    cout.flush();
    return 0;
}
