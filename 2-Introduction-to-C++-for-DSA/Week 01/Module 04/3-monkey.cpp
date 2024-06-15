#include<bits/stdc++.h>

using namespace std;

int main() {
    char str[100000];
    int len;
    while(cin.getline(str, 100001)){
        len = strlen(str);
        sort(str, str+len);
        for(int i=0; i<len; i++) {
            if(str[i] != ' ') {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}