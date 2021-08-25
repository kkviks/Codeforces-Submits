#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int v[n];
    int a,b;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]==1)a=i;
        if(v[i]==n)b=i;
    }
    if(a>b)swap(a,b);
    bool ok1=false, ok2 = false;
    int i=0,j=n-1, cnt = 0;
    while(ok1!=true and ok2!=true){
        cout << i << " " << j << endl;
        if(i==a){
            i++; cnt++;
            ok1 = true;
             //continue;
        }
        if(i==b){
            ok2 = true;
            i++;
            cnt++; break;
        }
        if(j==b){
            ok2= true;
            j--; cnt++; //continue;
        }
        if(j==a){
            ok1 = true;
            j--;cnt++; break;
        }

        if(ok1==false and ok2==false){
            if(abs(a-i)<=abs(j-b)){
                i++; cnt++;
            }else j--, cnt++;
        }else if(ok1==true and  ok2==false){
            if(abs(b-i)<=abs(j-b))i++,cnt++;
            else j--, cnt++;
        }else if(ok1==false and ok2 == true){
            if(abs(a-i)<=abs(j-a))i++,cnt++;
            else j--, cnt++;
        }else break;
    }
    cout << cnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}