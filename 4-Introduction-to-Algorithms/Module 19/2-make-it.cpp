#include<bits/stdc++.h>

using namespace std;

bool subset_sum(int start, int target, vector<int> &dp) {
    if(start > target) return false;
    if(start == target) return true;
    if(dp[start] != -1) return dp[start];
    
    bool op1 = subset_sum(start + 3, target, dp);
    bool op2 = subset_sum(start * 2, target, dp);
    return dp[start] = op1 || op2;  
}

int main() {
    int t, s;
    cin >> t;
    while(t--) {
        cin >> s;
        vector<int> dp(100005, -1);
        if(subset_sum(1, s, dp)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}