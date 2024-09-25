#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    int a, b;
    for(int i=0; i<e; ++i) {
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    for(int i=0; i<e; ++i) {
        for(int j=0; j<e; ++j) {
            if(mat[i][j] == 1) {
                cout << i << " and " << j << " are connected." << endl;
            }
        }
    }

    return 0;
}