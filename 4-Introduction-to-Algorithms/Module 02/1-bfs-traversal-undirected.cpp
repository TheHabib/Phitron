#include<bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> &g, int n, int s, vector<bool> &vis, vector<int> &level) {
    

    queue<int> q;
    q.push(s);
    vis[s] = true;
    level[s] = 0;
    while(!q.empty()) {
        int u = q.front();
        cout << q.front() << '\n';
        q.pop();
        for(auto v : g[u]) {
            if(!vis[v]) {
                q.push(v);
                vis[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << "Enter number of nodes and edges: " << endl;
    int n, e;
    cin >> n >> e;
    vector<vector<int>> g(n);
    int u, v;
    cout << "Enter nodes" << endl;
    while(e--) {
        cin >> u >> v; 
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<bool> vis(n, false);
    vector<int> level(n, -1);

    int s;
    cout << "Enter source:" << endl;
    cin >> s;

    bfs(g, n, s, vis, level);

    for(int i=0; i<n; i++) {
        cout << i << " -> " << level[i] << endl;
    }

    return 0;
}