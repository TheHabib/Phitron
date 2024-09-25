#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    int a, b;

    while (e--) {
        cin >> a >> b;
        mat[a][b] = 1;
    }

    cin >> e;

    while(e--) {
        cin >> a >> b;
        if(mat[a][b]==1) {
            cout << "YES" << endl;
        }
        else if(a == b) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    
    return 0;
}