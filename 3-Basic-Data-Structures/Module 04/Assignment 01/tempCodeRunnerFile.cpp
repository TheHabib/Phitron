#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    //printing upper half of x
    //first e i ta space hobe
    //erpor ekta \ hobe
    //erpor ((n/2 - i)*2)-1 ta space hobe
    //erpor ekta / hobe
    //erpor newline
    
    for(int i=0; i<n/2; i++) {
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        cout << "\\";
        for(int j=0; j<((n/2 - i)*2)-1; j++) {
            cout << " ";
        }
        cout << "/";
        cout << endl;
    }

    //printing X
    //first e n/2 ta space hobe
    //then ekta X hobe

    for(int i=0; i<n/2; i++) {
        cout << " ";
    }
    cout << "X" << endl;

    //printing lower half of x
    //first e n - 1 - i ta space hobe
    //erpor ekta / hobe
    // erpor ((i - n/2)*2)-1 ta space hobe
    //erpor ekta \ hobe
    //erpor ekta newline hobe

    for(int i=(n/2)+1; i<n; i++) {
        for(int j=0; j<n-1-i; j++) {
            cout << " ";
        }
        cout << "/";
        for(int j=0; j<((i - n/2)*2)-1; j++) {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }


    return 0;
}