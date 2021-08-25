#include <bits/stdc++.h>
using namespace std;
#define int long long
 
struct Seg
{
    int MAX_SIZE;
    int n;
    vector<int> tree;
 
    Seg(vector<int> &a)
    {
        n = a.size();
        MAX_SIZE = 4 * n + 1;
        for (int i = 0; i < MAX_SIZE; i++)
            tree.push_back(0);
        buildTree(a, 0, n - 1, 1);
    }
 
    void printTree()
    {
        for (int i = 1; i < tree.size(); i++)
            cout << tree[i] << " ";
    }
 
    void buildTree(vector<int> &a, int s, int e, int idx)
    {
        if (s == e)
        {
            assert(idx < MAX_SIZE);
            tree[idx] = a[s];
            return;
        }
 
        int mid = s + (e - s) / 2;
        buildTree(a, s, mid, 2 * idx);
        buildTree(a, mid + 1, e, 2 * idx + 1);
 
        tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
    }
 
    int query(int qs, int qe)
    {
        return query(0, n - 1, qs, qe, 1);
    }
 
    int query(int ss, int se, int qs, int qe, int idx)
    {
        if (ss >= qs and se <= qe)
        {
            //assert(idx<MAX_SIZE);
            return tree[idx];
        }
        if (qe < ss or se < qs)
            return 0;
 
        int mid = (ss + se) / 2;
 
        int left = query(ss, mid, qs, qe, 2 * idx);
        int right = query(mid + 1, se, qs, qe, 2 * idx + 1);
 
        return left + right;
    }
 
    void updateNode(int i, int val)
    {
        updateNode(0, n - 1, i, val, 1);
    }
 
    void updateNode(int s, int e, int i, int val, int idx)
    {
        if (i < s or i > e)
            return;
        if (s == e)
        {
            //assert(idx < MAX_SIZE);
            tree[idx] = val;
            return;
        }
 
        int mid = (s + e) / 2;
        updateNode(s, mid, i, val, 2 * idx);
        updateNode(mid + 1, e, i, val, 2 * idx + 1);
 
        tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
    }
};
 
int32_t main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
 
    for (int &x : a)
    {
        cin >> x;
    }
 
    Seg seg(a);
    //seg.printTree();
 
    while (q--)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            int idx = x;
            int val = y;
            seg.updateNode(x, y);
        }
        else if (t == 2)
        {
            int l = x, r = y - 1;
            int ans = seg.query(l, r);
            cout << ans << endl;
        }
    }
 
    return 0;
}