#include <bits/stdc++.h>
using namespace std;
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<pair<int, int>> path;
vector<vector<pair<int, int>>> parents(1005, vector<pair<int, int>>(1005, {-1, -1}));
int n, m;
char a[1005][1005];
bool valid(int i, int j) {
    if (i < 1 || i > n || j < 1 || j > m || a[i][j] == '#')
        return false;
    return true;
}

void bfs(int si, int sj, int di, int dj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        if(a == di && b == dj) break;
        for (int i = 0; i < 4; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parents[ci][cj] = par;
            }
        }
    }
}

void getpath(int si, int sj, int di, int dj) {
    int i = di;
    int j = dj;
    while(i != -1 && j != -1) {
        if(!(i == si && j == sj) && !(i == di && j == dj)) {
            a[i][j] = 'X';
        }
        pair<int, int> farcry = parents[i][j];
        i = farcry.first;
        j = farcry.second;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    int si, sj, di, dj;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == 'R') {
                si = i;
                sj = j;
            }
            if(a[i][j] == 'D') {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(si, sj, di, dj);
    getpath(si, sj, di, dj);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}