#include<bits/stdc++.h>

using namespace std;

int main() {
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
                cout << "Invalid" << endl;
            }
            else{
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }
    return 0;
}