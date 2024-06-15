#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    s = " " + s + " ";
    string find = " Jessica ";
    if(int(s.find(find)) != -1) {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}