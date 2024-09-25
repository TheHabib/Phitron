#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

vector<int> adjList[N];
bool vis[N];

void dfs(int src) {
    cout << src << endl;
    vis[src] = true;
    for(auto child : adjList[src]) {
        if(vis[child] == false) {
            dfs(child);
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
    int src;
    cout << "Enter Source: ";
    cin >> src;
    memset(vis, false, sizeof(vis));
    dfs(src);

    return 0;
}