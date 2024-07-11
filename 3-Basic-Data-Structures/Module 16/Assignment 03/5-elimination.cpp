#include<bits/stdc++.h>

using namespace std;

string eliminate(string str) {
    for(int i=0; i<int(str.length()); i++) {
        if(str[i]=='0' && str[i+1]=='1') {
            str.erase(i, 2);
            i=-1;
        }
    }
    if(str.length()==0) {
        return "YES";
    }
    else{
        return "NO";
    }
}

int main() {
    string str;
    int t;
    queue<string> qu;
    cin >> t;
    while(t--) {
        cin >> str;
        qu.push(str);
    }
    while(!qu.empty()) {
        cout << eliminate(qu.front()) << endl;
        qu.pop();
    }
    return 0;
}