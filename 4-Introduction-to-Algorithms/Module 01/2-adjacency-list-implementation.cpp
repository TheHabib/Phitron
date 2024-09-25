#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];

    int a, b;
    for(int i=0; i<e; ++i) {
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int node;
    cout << "Enter node: " << endl;
    cin >> node;
    for(int i : mat[node]) {
        cout << i << " ";
    }

    return 0;
}