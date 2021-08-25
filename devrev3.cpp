#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a, vector<int> &b){
    int p1 = a[0], s1 = a[1], d1 = a[2], i1 = a[3];
    int p2 = b[0], s2 = b[1], d2 = b[2], i2 = b[3];

    if(p1>p2)return true;
    else if(p2>p1)return false;

    if(s1<s2)return true;
    else if(s2<s1)return false;

    if(d1<d2)return true;
    else if(d2<d1)return false;

    return i1<i2;
}

vector<int> taskRunner(vector<int> s, vector<int> d, vector<int> p){
    int n = s.size();
    vector<vector<int>> v(n);

    for(int i=0;i<n;i++){
        v[i].push_back(p[i]);
        v[i].push_back(s[i]);
        v[i].push_back(d[i]);
        v[i].push_back(i);
    }

    sort(v.begin(),v.end(),comp);
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        ans[i] = v[i][3];
    }

    return ans;
}