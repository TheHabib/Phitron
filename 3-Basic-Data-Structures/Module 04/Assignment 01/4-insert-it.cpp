#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1;
    int val;
    for(int i=0; i<n; i++) {
        cin >> val;
        v1.push_back(val);
    }
    int m;
    cin >> m;
    vector<int> v2;
    for(int i=0; i<m; i++) {
        cin >> val;
        v2.push_back(val);
    }
    int index;
    cin >> index;
    v1.insert(v1.begin()+index, v2.begin(), v2.end());
    for(int i=0; i< (int)v1.size(); i++) {
        cout << v1[i] << " ";
    }
    return 0;
}