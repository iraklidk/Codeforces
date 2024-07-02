//IrakliDK
//https://codeforces.com/problemset/problem/1744/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        
        int n;
        char c;
        cin >> n >> c;

        string s;           // rrrgyyygy rrrgyyygy
        cin >> s;
        s += s;

        stack<int> paths;
        int res = 0;
        int maxRes = 0;

        for (int i = 0; i < 2 * n; i++) {

            if (s[i] == c && paths.empty() && i <= n - 1) {
                paths.push(i);
            }

            if (s[i] == 'g' && !paths.empty()) {
                paths.push(i);
            }

            if (paths.size() == 2) {
                int top = paths.top();
                paths.pop();
                res = top - paths.top();
                paths.pop();
                if (res > maxRes)
                    maxRes = res;
            }

        }
        cout << maxRes << endl;
    }
}