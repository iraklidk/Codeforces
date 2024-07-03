// IrakliDK 
// https://codeforces.com/problemset/problem/1972/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;


bool canAliceWin(string str) {

    int countU = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'U') countU++;
    }

    return countU % 2 == 0 ? 0 : 1;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {

        int n;
        string s;
        cin >> n >> s;

        bool ans = canAliceWin(s);

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}