#include<bits/stdc++.h>

using namespace std;

int* sort_it(int n) {
    int* arr = new int[n];
    int i;
    for(i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    return arr;
}

int main() {
    int n, i;
    cin >> n;
    int* ar = sort_it(n);
    for(i=0; i<n; i++) {
        cout << ar[i] << " "; 
    }
    return 0;
}