#include<bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vector<int> adjacency_list[t];
    int a, b;
    for(int i=0; i<t; i++) {
        cin >> a >> b;
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }

    //convert(t, adjacency_list);
    return 0;
}