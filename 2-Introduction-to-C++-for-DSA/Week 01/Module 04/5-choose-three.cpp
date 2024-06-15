#include<bits/stdc++.h>

using namespace std;

int ispossible(int arr[], int n, int s) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i] + arr[j] + arr[k] == s) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    for(int p=0; p<t; p++) {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        if(ispossible(arr, n, s) == 1) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}