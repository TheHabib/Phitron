#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    int val;
    for(int i=0; i<n; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++) {
        if(v[i] == v[i+1]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}