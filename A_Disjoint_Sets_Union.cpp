#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    int *parent;
    int *rank;

    DSU(int n)
    {
        parent = new int[n + 2];
        rank = new int[n + 2];
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
        parent[n + 1] = n + 1;
        rank[n + 1] = 0;
    }

    int find(int a)
    {
        if (parent[a] == a)
            return a;

        int rep = find(parent[a]);
        parent[a] = rep;
        return rep;
    }

    void join(int a, int b)
    {
        int sa = find(a);
        int sb = find(b);

        if (sa == sb)
            return;
        
        if(rank[sa]> rank[sb])
            swap(sa,sb);

        rank[sb]+=rank[sa];
        rank[sa] = 0;
        parent[sa] = parent[sb];
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    DSU set(n);
    string op;
    int a,b;
    while (q--)
    {
        cin >> op >> a >> b;
        if (op == "get")
        {
            bool isSameSet = set.find(a) == set.find(b);
            cout << (isSameSet?"YES":"NO");
        }
        else
            set.join(a,b);
        cout << endl;
    }
    return 0;
}