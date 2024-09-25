#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
bool vis[1005][1005];
int apartment;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#')
        return false;
    return true;
}
void dfs(int si, int sj)
{
    apartment++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    vector<int> rev_app;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && vis[i][j] == false)
            {
                apartment = 0;
                dfs(i, j);
                if (apartment != 0)
                {
                    rev_app.push_back(apartment);
                }
            }
        }
    }
    if (!rev_app.empty())
    {
        sort(rev_app.begin(), rev_app.end());
        for (int value : rev_app)
        {
            cout << value << " ";
        }
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}