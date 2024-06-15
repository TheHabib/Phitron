#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v;
        int n, val;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> val;
            v.push_back(val);
        }
        int issorted=1;
        for(int i=0; i<n-1; i++) {
            if(v[i] > v[i+1]) {
                issorted = 0;
                break;
            }
        }
        if(issorted == 0) {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}