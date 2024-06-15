#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int k=0; k<t; k++) {
        int id[3];
        char name0[101], name1[101], name2[101];
        char section[3];
        int marks[3];
        for(int i=0; i<3; i++) {
            cin >> id[i];
            if(i==0) {
                cin >> name0;
            }
            else if(i==1) {
                cin >> name1;
            }
            else if(i==2) {
                cin >> name2;
            }
            cin >> section[i];
            cin >> marks[i];
        }
        int answerindex=0;
        if(marks[0] >= marks[1] && marks[0] >= marks[2]) {
            answerindex = 0;
        }
        else if(marks[1] >= marks[0] && marks[1] >= marks[2]) {
            if(marks[1] == marks[0]) {
                answerindex = 0;
            }
            else{
                answerindex = 1;
            }
        }
        else if(marks[2] >= marks[0] && marks[2] >= marks[1]) {
            if(marks[2] == marks[0]) {
                answerindex = 0;
            }
            else if(marks[2] == marks[1]) {
                answerindex = 1;
            }
            else{
                answerindex = 2;
            }
        }
        if(answerindex == 0) {
            cout << id[0] << " " << name0 << " " << section[0] << " " << marks[0] << endl;
        }
        else if(answerindex == 1) {
            cout << id[1] << " " << name1 << " " << section[1] << " " << marks[1] << endl;
        }
        else{
            cout << id[2] << " " << name2 << " " << section[2] << " " << marks[2] << endl;
        }
        
    }
    return 0;
}