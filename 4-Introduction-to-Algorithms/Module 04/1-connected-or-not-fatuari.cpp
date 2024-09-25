#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        vector<int> v;
        int X;
        cin >> X;
        if (!mat[X].empty())
        {
            for (int nodes : mat[X])
            {
                v.push_back(nodes);
            }

            sort(v.begin(), v.end(), greater<int>());

            for (int re_nodes : v)
            {
                cout << re_nodes << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}