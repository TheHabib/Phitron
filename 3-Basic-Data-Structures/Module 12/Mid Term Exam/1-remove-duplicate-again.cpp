#include <bits/stdc++.h>

using namespace std;

int main() {
    list<int> myList;
    int value;

    while (true) {
        cin >> value;
        if(value == -1) {
            break;
        }
        myList.push_back(value);
    }

    myList.sort();
   
    for(auto pos = myList.begin(); pos != myList.end(); ++pos) {
        auto nextpos = pos;
        ++nextpos;
        while(nextpos != myList.end()) {
            if(*nextpos == *pos) {
                auto tmppos = nextpos;
                ++tmppos;
                myList.erase(nextpos);
                nextpos = tmppos;
            }
            else break;
        }
    }

    for (int element : myList) {
        cout << element << " " ;
    }
    cout << endl;

    return 0;
}
