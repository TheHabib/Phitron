#include<bits/stdc++.h>

using namespace std;


class Pairs {
    public:
        string name;
        int uniquenumber;
        Pairs(string name, int uniquenumber) {
            this->name = name;
            this->uniquenumber = uniquenumber;
        }
};

class compareclass {
    public:
        bool operator() (Pairs a, Pairs b) {
            if(a.name > b.name) return true;
            else if(a.name == b.name) {
                if(a.uniquenumber < b.uniquenumber) return true;
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
    int uniquenumber;
    
    while(n--) {
        cin >> name >> uniquenumber;
        Pairs obj(name, uniquenumber);
        pairs.push(obj);
    }

    while(!pairs.empty()) {
        cout << pairs.top().name << " " << pairs.top().uniquenumber << endl;
        pairs.pop();
    }

    return 0;
}