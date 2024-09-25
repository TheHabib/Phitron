#include<bits/stdc++.h>

using namespace std;


class Pairs {
    public:
        string name;
        int roll;
        int marks;
        Pairs(string name, int roll, int marks) {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class compareclass {
    public:
        bool operator() (Pairs a, Pairs b) {
            if(a.marks < b.marks) return true;
            else if(a.marks == b.marks) {
                if(a.roll > b.roll) return true;
                else return false;
            }
            else return false;
        }
};


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    priority_queue<Pairs, vector<Pairs>, compareclass> pairs;
    string name;
    int roll;
    int marks;
    
    while(n--) {
        cin >> name >> roll >> marks;
        Pairs obj(name, roll, marks);
        pairs.push(obj);
    }

    /* while(!pairs.empty()) {
        cout << pairs.top().name << " " << pairs.top().roll << endl;
        pairs.pop();
    } */

    cin >> n;
    int cmd;
    while(n--) {
        cin >> cmd;
        if(cmd == 0) {
            //name roll marks input niye insert korbo. Then print the current student's data who has the maximum mark from the list.
            cin >> name >> roll >> marks;
            Pairs obj(name, roll, marks);
            pairs.push(obj);
            cout << pairs.top().name << " " << pairs.top().roll << " " << pairs.top().marks << endl;
        }
        else if(cmd == 1) {
            //Then print the current student's data who has the maximum mark from the list.
            if(!pairs.empty()) {
                cout << pairs.top().name << " " << pairs.top().roll << " " << pairs.top().marks << endl;
                
            }
            else{
                cout << "Empty\n";
            }
        }
        else if(cmd == 2) {
            //max student delete. then print.
            if(!pairs.empty()) {
                pairs.pop();
                if(!pairs.empty()) {
                    cout << pairs.top().name << " " << pairs.top().roll << " " << pairs.top().marks << endl;
                }
                else{
                    cout << "Empty\n";
                }
                
                
            }
            else{
                cout << "Empty\n";
            }
        }
    }
   

    return 0;
}