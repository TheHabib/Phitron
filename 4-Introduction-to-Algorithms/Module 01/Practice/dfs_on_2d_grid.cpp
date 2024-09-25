#include<bits/stdc++.h>

using namespace std;

int n, m;
const int N = 1005;

char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int ci, int cj) {
    if(ci < 0 || ci >= n || cj < 0 || cj >= m) return false;
    return true;
}

void dfs(int si, int sj) {
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    int ci, cj;
    for(int i = 0; i < n; i++) {
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if(valid(ci, cj) && !vis[ci][cj]) {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cout << "Enter Source: ";
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}