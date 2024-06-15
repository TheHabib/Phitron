#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v;
    long long val;
    for(int i=0; i<n; i++) {
        cin >> val;
        if(i>0){
            val+=v[i-1];
        }
        v.push_back(val);
    }
    for(int i=0; i<n/2; i++) {
        swap(v[i], v[n-1-i]);
    }
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << '\n';

    return 0;
}