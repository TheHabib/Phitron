#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    queue<string> qu;
    int q, command;
    cin >> q;
    while(q--) {
        cin >> command;
        if(command==0) {
            string str;
            cin >> str;
            qu.push(str);
        }
        else if(command==1) {
            if(qu.empty()) {
                cout << "Invalid" << '\n';
            }
            else{
                cout << qu.front() << '\n';
                qu.pop();
            }
        }
    }
    return 0;
}