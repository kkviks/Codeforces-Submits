#include<bits/stdc++.h>
using namespace std;

int foo(int a[],int si, int ei){
    if(si>=ei)return 0;

    int smallOutput1= INT_MIN;
    int smallOutput2 = INT_MIN;
    int smallOutput3 = INT_MIN;

    if(a[si]!=a[ei]){
        smallOutput1 = foo(a,si+1,ei-1)+2;
    }

    if(a[si]!=a[ei-1]){
        smallOutput2 = foo(a,si,ei-1)+0;
    }
    if(a[si+1]!=a[ei]){
        smallOutput3 = foo(a,si+1,ei)+0;
    }

    int ans = max({smallOutput1,smallOutput2,smallOutput3});
    return ans;
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int i=0, j = n-1;
    int count = foo(a,0,n-1);
    if(count<0)count = 0;
    int ans = n-count;
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}