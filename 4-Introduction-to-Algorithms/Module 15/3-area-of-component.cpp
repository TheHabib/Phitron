#include <bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int dis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char a[1000][1000];
bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '-')
        return false;
    return true;
}

int bfs(int si, int sj) {
    int componentArea = 1;
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                ++componentArea;
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
    return componentArea;
}
int main() {
    cin >> n >> m;
    vector<int> componentAreas;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] != '-' && !vis[i][j]) {
                componentAreas.push_back(bfs(i, j));
            }
        }
    }
    if(!componentAreas.empty()) {
        sort(componentAreas.begin(), componentAreas.end());
        cout << componentAreas[0] << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}