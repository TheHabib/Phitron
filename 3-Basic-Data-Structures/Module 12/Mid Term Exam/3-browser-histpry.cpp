#include <bits/stdc++.h>

using namespace std;

int main() {
    list<string> myList;
    string value;

    while (true) {
        cin >> value;
        if(value == "end") {
            break;
        }
        myList.push_back(value);
    }

    int q;
    cin >> q;
    auto it = myList.begin();
    while(q--) {
        string cmd, address;
        cin >> cmd;

        

        if(cmd == "next") {
            auto tmpit = it;
            if(++tmpit == myList.end()) {
                cout << "Not Available" << endl;
            }
            else{
                ++it;
                cout << *it << endl;
            }
        }
        else if(cmd == "prev") {
            if(it == myList.begin()) {
                cout << "Not Available" << endl;
            }
            else{
                --it;
                cout << *it << endl;
            }
        }
        else if(cmd == "visit") {
            cin >> address;
            auto tmpit = it;
            it = find(myList.begin(), myList.end(), address);
            if(it != myList.end()) {
                cout << *it << endl;
            }
            else{
                it = tmpit;
                cout << "Not Available" << endl;
            }
        }
    }


    return 0;
}
