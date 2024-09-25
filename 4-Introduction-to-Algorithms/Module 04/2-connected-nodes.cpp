#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--) {

        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    
    /* for (int i = 0; i < mat[3].size(); i++) {
        cout << mat[3][i] << " ";
    }
     */

    cin >> e;

    for(int i=0; i<n; i++) {
        sort(mat[i].rbegin(), mat[i].rend());
    }

    while(e--) {
        int query;
        cin >> query;
        if(!mat[query].empty()) {
            for(auto i: mat[query]) {
                cout << i << " ";
            }
        }
        else{
            cout << "-1";
        }
        cout << endl;
    }

    return 0;
}