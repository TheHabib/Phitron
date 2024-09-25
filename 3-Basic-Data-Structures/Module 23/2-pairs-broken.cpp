#include<bits/stdc++.h>

using namespace std;

void bubbleSortinDescending(vector<pair<string, int>>& vpr, int start, int end) {
    for(int i = start; i < end - 1; i++) {
        for(int j = start; j < end - 1; j++) {
            if(vpr[j].second < vpr[j+1].second) {
                swap(vpr[j], vpr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> vpr;
    string vpr_first;
    int vpr_second;
    for(int i=0; i<n; i++) {
        cin >> vpr_first >> vpr_second;
        vpr.push_back({vpr_first, vpr_second});
    }
    sort(vpr.begin(), vpr.end());
    int i = 0;
    while(i < n) {
        int j=i;
        while(j < n) {
            if(vpr[j].first == vpr[i].first) {
                ++j;
            }
            else{
                break;
            }
        }
        
        bubbleSortinDescending(vpr, i, j);
        i = j + 1;
    }

    for(int i = 0; i < int(vpr.size()); i++) {
        cout << vpr[i].first << " " << vpr[i].second << endl;
    }

    return 0;
}