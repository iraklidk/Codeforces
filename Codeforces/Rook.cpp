//IrakliDK
//https://codeforces.com/problemset/problem/1907/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int tc; cin >> tc;
    while (tc--) {
        string s; cin >> s;

        for (int i = 1; i <= 8; i++) {
            if (s[1] - '0' == i) continue;
            cout << s[0] << i << endl;
        }

        for (char c = 'a'; c <= 'h'; c++) {
            if (c == s[0]) continue;
            cout << c << s[1] << endl;
        }
    }
}


