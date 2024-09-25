#include <bits/stdc++.h>
using namespace std;

void insert_min_heap(vector<int> &v, int x) {
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while(cur_idx != 0) {
        int parent_idx = (cur_idx - 1) / 2;
        if(v[parent_idx] > v[cur_idx]) {
            swap(v[parent_idx], v[cur_idx]);
        }
        else{
            break;
        }
        cur_idx = parent_idx;
    }
}

void delete_min_heap(vector<int> &v) {

    if (v.empty()) return;
    
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur=0;
    while(true) {
        int left_idx = cur*2 + 1;
        int right_idx = cur*2 + 2;
        int last_idx = v.size() - 1;
        if(left_idx <= last_idx && right_idx <= last_idx) {
            if(v[left_idx] <= v[right_idx] && v[left_idx] < v[cur]) {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur]) {
            swap(v[right_idx], v[cur]);
            cur = right_idx;
            }
            else {
                break;
            }
        }
        else if(left_idx <= last_idx) {
            if(v[left_idx] < v[cur]) {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else{
                break;
            }
        }
        else if(right_idx <= last_idx) {
            if(v[right_idx] < v[cur]) {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else{
                break;
            }
        }
        else{
            break;
        }
        
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert_min_heap(v, x);
    }

    cin >> n;
    int cmd;
    int val;
    while(n--) {
        cin >> cmd;
        if(cmd == 0) {
            //insert x into the list then print current minimum value
            cin >> val;
            insert_min_heap(v, val);
            cout << v[0] << endl;
        }
        else if(cmd == 1) {
            //print current minimum value from the list if list empty print "Empty"
            if (v.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << v[0] << endl; // The root of the heap is the minimum value
            }
        }
        else if(cmd == 2) {
            //delete the current minimum value and print the minimum value after deletion. if list empty print "Empty"
            delete_min_heap(v);
            if (v.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << v[0] << endl; // The root of the heap is the minimum value
            }

        }
    }


    return 0;
}