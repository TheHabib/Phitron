#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int val;
        set<int> st;
        for(int i=0; i<n; i++) {
            cin >> val;
            st.insert(val);
        }
        for(auto it : st) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}