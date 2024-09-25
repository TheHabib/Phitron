#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        vector<string> words;

        while(ss>>word) {
            mp[word]++;
            words.push_back(word);
        }

        vector<int> occurancecount;

        for(auto it = mp.begin(); it != mp.end(); it++) {
            occurancecount.push_back(it->second);
        }
        sort(occurancecount.begin(), occurancecount.end());
        int highestcount = occurancecount[occurancecount.size()-1];
        vector<string> highestwords;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second == highestcount) {
                highestwords.push_back(it->first);
            }
        }
        reverse(words.begin(), words.end());
        int countchk = int(highestwords.size()) - 1;
        int count = 0;
        for(int i=0; i<int(words.size()); i++) {
            for(int j=0; j<int(highestwords.size()); j++) {
                if(words[i] == highestwords[j]) {
                    ++count;
                    highestwords.erase(highestwords.begin() + j);
                    break;
                }
            }
            if(countchk == count) {
                break;
            }
        }
        //ekhon highestwords e ekmatro word ache and otar frequency ber korte parle answer
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->first == highestwords[0]) {
                cout << it->first << " " << it->second << endl;
                break;
            }
        }

    }

    return 0;
}