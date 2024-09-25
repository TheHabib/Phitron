#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
vector<int> adjList[N];
bool vis[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()) {
        int par = q.front();
        q.pop();
        cout << par << endl;
        for(auto child : adjList[par]) {
            if(vis[child] == false) {
                q.push(child);
                vis[child]=true;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    int a, b;
    while(e--) {
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    int source;
    cout << "Enter Source" << '\n';
    cin >> source;
    bfs(source);

    return 0;
}