#include<bits/stdc++.h>

using namespace std;

void check_same(stack<int> st, queue<int> qu) {
    while(!qu.empty() && !st.empty()) {
        if(st.top() != qu.front()) {
            cout << "NO";
            return;
        }
        st.pop();
        qu.pop();
    }
    cout << "YES";
    return;
}

int main() {
    
    stack<int> st;
    queue<int> qu;
    int n, m;
    cin >> n >> m;
    int nval=n, mval=m;
    int val;
    while(n--) {
        cin >> val;
        st.push(val);
    }
    while(m--) {
        cin >> val;
        qu.push(val);
    }

    if(nval != mval) {
        cout << "NO";
    }
    else{
        check_same(st, qu);
    }
    
    return 0;
}