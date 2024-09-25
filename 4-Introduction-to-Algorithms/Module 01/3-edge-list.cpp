#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> edge_list;
    int a, b;
    while(e--) {
        cin >> a >> b;
        edge_list.push_back({a,b});
    }
    cout << "edge list: " << endl;
    
    for(auto i: edge_list) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}