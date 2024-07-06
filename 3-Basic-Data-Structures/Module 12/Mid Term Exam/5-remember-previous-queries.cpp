#include <bits/stdc++.h>

using namespace std;

void print_list(list<int> myList) {
    cout << "L -> ";
    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;
    cout << "R -> ";
    for(auto it = myList.rbegin(); it != myList.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;

    int q;
    cin >> q;

    while(q--) {
        int x, v;
        cin >> x >> v;
        if(x != 2) {
            if(x == 0) {
                myList.push_front(v);
            }
            else if(x == 1) {
                myList.push_back(v);
            }
        }
        else if(x == 2) {
            if(v < int(myList.size())) {
                myList.erase(next(myList.begin(), v));
            }
        }
        print_list(myList);
    }

    return 0;
}
