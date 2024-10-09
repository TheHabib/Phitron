#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int val;
        int hello1=0, hello2=0;
        vector<int> underthewater;
        for(int i = 0; i < n; i++) {
            cin >> val;
            underthewater.push_back(val);
            if(val > hello1) {
                //hello1 theke boro
                //hello1 boshbe hello2 te then val boshbe hello1 e
                hello2 = hello1;
                hello1 = val;
            }
            else if(val > hello2) {
                //hello2 theke boro hello1 theke chuto
                //val hello2 ke replace korbe
                hello2 = val;
            }
        }
        int index1=-1, index2=-1;
        for(int i = 0; i < n; i++) {
            if(underthewater[i] == hello1) index1 = i;
            if(underthewater[i] == hello2) index2 = i;
        }
        if(index1 > index2) swap(index1, index2);
        cout << index1 << " " << index2 << endl;
        
    }

    return 0;
}