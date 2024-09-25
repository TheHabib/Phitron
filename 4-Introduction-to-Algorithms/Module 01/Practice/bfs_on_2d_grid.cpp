/* 
0 1
0 -1
1 0
-1 0 
*/

#include<bits/stdc++.h>

using namespace std;
int n, m;
const int N = 1005;
char a[N][N];
vector<pair<int, int>> d = {{0,1}, {0,-1}, {1, 0}, {-1, 0}};
bool vis[N][N];
int dis[N][N];

bool valid(int ci, int cj) {
    if(ci < 0 || ci >= n || cj < 0 || cj >= m) return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    int a, b;
    while(!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        a = par.first;
        b = par.second;
        cout << a << " " << b << endl;
        for(int i=0; i<4; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if(valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cout << "Enter Source x and y" << endl;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    cout << "BFS:" << endl;
    bfs(si, sj);
    cout << "Enter Destination to find distance: ";
    int desx, desy;
    cin >> desx >> desy;
    cout << "Distance: " << dis[desx][desy];
    return 0;
}