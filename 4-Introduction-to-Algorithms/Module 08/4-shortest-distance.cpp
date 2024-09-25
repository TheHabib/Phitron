#include<bits/stdc++.h>
#define ll long long
using namespace std;

const long long int INF = 1e18;

int main(){
    ll n, e;
    cin >> n >> e;
    ll adjM[n+1][n+1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            adjM[i][j] = INF;
            if(i == j){
                adjM[i][j] = 0;
            }
        }
    }

    while(e--){
        int a, b;
        ll w;
        cin >> a >> b >> w;

        if(adjM[a][b] > w) {
            adjM[a][b] = w;
        }
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(adjM[i][k] + adjM[k][j] < adjM[i][j]){
                    adjM[i][j] = adjM[i][k] + adjM[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        if(adjM[x][y] == INF){
            cout << -1 << endl;
        }
        else{
            cout << adjM[x][y] << endl;
        }
    }
    return 0;  
}
