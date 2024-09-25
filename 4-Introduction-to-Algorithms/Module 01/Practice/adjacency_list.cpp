//adjacency matrix

#include<bits/stdc++.h>

using namespace std;


void undirected_graph_adj_list(vector<vector<int>> &adjacency_list, int e) {
    int a, b;
    cout << "Enter a and b: " << endl;
    while(e--) {
        cin >> a >> b;
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }
}

void directed_graph_adj_list(vector<vector<int>> &adjacency_list, int e) {
    int a, b;
    cout << "Enter a and b: " << endl;
    while(e--) {
        cin >> a >> b;
        adjacency_list[a].push_back(b);
    }
}
//vector<vector<int>> adjacency_list(n);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int choice;
    
    cout << "Enter choice: " << endl << "1. Undirected Graph\n2. Directed Graph" << endl;
    cin >> choice;
    
    int n, e;
    cout << "Enter n and e: " << endl;
    cin >> n >> e;
    vector<vector<int>> adjacency_list(n);
    
    if(choice == 1) {
        undirected_graph_adj_list(adjacency_list, e);
    }
    else{
        directed_graph_adj_list(adjacency_list, e);
    }

    cout << "Enter a Node to see it's adjacent nodes: " << endl;
    cin >> choice;
    for(auto i: adjacency_list[choice]) {
        cout << i << " ";
    }

    return 0;
}