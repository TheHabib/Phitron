#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        int find;

        while (1)
        {
            find = int(s.find(x));
            if (find == -1)
            {
                break;
            }

            s.replace(find, x.length(), "#");
        }

        cout << s << endl;
    }

    return 0;
}
