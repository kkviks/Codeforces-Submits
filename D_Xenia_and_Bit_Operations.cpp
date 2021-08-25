#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int x=0;


int query(int *tree,int ss,int se,int qs,int qe,int index){
    ///Complete Overlap
    if(ss>=qs && se<=qe){
        return tree[index];
    }
    
    //No Overlap
    if(qe<ss || qs>se){
        return INT_MAX;
    }
    
    //Partial Overlap - Call both sides and update the current ans 
    int mid = (ss+se)/2;
    int leftAns = query(tree,ss,mid,qs,qe,2*index);
    int rightAns  = query(tree,mid+1,se,qs,qe,2*index+1);
    return min(leftAns,rightAns);
    
}

void buildTree(int *a,int s,int e,int *tree,int index){
    
    if(s==e){
        tree[index] = a[s];
        return ;
    }
    
    //Rec case
    int mid = (s+e)/2;
    buildTree(a,s,mid,tree,2*index);
    buildTree(a,mid+1,e,tree,2*index+1);
    tree[index] = min(tree[2*index],tree[2*index+1]);
    
    return;
}

void updateNode(int *tree,int ss,int se,int i,int b,int index){
    //Leaf updateNode
    //Out of bounds - No Overlap
    if(i>se||i<ss){
        return;
    }
    
    //Leaf Node 
    if(ss==se){
        tree[index] = b;
        return;
    }
    
    //Left and Right - Call 
    int mid = (ss+se)/2;
    updateNode(tree,ss,mid,i,b,2*index);
    updateNode(tree,mid+1,se,i,b,2*index+1);
    tree[index] = min(tree[2*index],tree[2*index+1]);
    return;
}


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m;
    cin >> n >> m;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int *tree = new int[4*n+1];
    buildTree(a,0,n-1,tree,1);
    while(n--){
        int p, b;
        cin >> p >> b;
        updateNode(tree,0,n-1,p,b,1);
        cout << query(tree,0,n-1,0,n-1,1) << endl;
    }
    cout.flush();
    return 0;
}