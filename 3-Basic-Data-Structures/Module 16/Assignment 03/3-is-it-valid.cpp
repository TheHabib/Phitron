#include<bits/stdc++.h>

using namespace std;

string isValid(string str) {
    int zero = 0, one = 0;
    for(int i=0; i<int(str.length()); i++) {
        if(str[i]=='0') {
            ++zero;
        }
        else if(str[i]=='1') {
            ++one;
        }
    }
    if(zero==one) {
        return "YES";
    }
    else{
        return "NO";
    }
}

int main() {
    
    int t;
    cin >> t;
    queue<string> st;
    while(t--) {
        string str;
        cin >> str;
        st.push(str);
    }

    while(!st.empty()) {
        string str = st.front();
        cout << isValid(str) << endl;
        st.pop();
    }

    return 0;
}