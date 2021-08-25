#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int minSolve(int n,int m,int a[]){
    int sum=0;
    for(int i=m-1;i>=0;i--){
        if(sum>=n)break;
        sum+=a[i];
    }
    return sum;
}

int maxSolve(int n,int m,int a[]){

}


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m;
    cin >> n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    int mi = minSolve(n,m,a);
    int mx = maxSolve(n,m,a);

    cout.flush();
    return 0;
}