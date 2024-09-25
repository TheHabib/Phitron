//adjacency matrix

#include<bits/stdc++.h>

using namespace std;


void undirected_graph_adj_matrix(vector<vector<int>> &adjacency_matrix, int e) {
    int a, b;
    cout << "Enter a and b: " << endl;
    while(e--) {
        cin >> a >> b;
        adjacency_matrix[a][b] = 1;
        adjacency_matrix[b][a] = 1;
    }
}

void directed_graph_adj_matrix(vector<vector<int>> &adjacency_matrix, int e) {
    int a, b;
    cout << "Enter a and b: " << endl;
    while(e--) {
        cin >> a >> b;
        adjacency_matrix[a][b] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int choice;
    
    cout << "Enter choice: " << endl << "1. Undirected Graph\n2. Directed Graph" << endl;
    cin >> choice;
    
    int n, e;
    cout << "Enter n and e: " << endl;
    cin >> n >> e;
    vector<vector<int>> adjacency_matrix(n, vector<int>(n, 0));
    
    if(choice == 1) {
        undirected_graph_adj_matrix(adjacency_matrix, e);
    }
    else{
        directed_graph_adj_matrix(adjacency_matrix, e);
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cout << adjacency_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}