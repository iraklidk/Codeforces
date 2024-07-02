//IrakliDK
//https://codeforces.com/problemset/problem/1986/C

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {

        int n, m;
        string s;
        cin >> n >> m >> s;
        vector<int> ind(m);
        for (int i = 0; i < m; i++) {
            cin >> ind[i];
        }
        string c;
        cin >> c;

        sort(ind.begin(), ind.end());
        sort(c.begin(), c.end());
        queue<char> q;

        for (int i = 0; i < m - 1;i++) {

            if (!q.empty() && q.front() < c[i]) {
                char tmp = c[i];
                c[i] = q.front();
                q.pop();
                q.push(tmp);
            }

            if (ind[i] == ind[i + 1]) {
                q.push(c[i + 1]);
                char tmp = c[i+1];          
                c[i + 1] = c[i];
                c[i] = tmp;
            }

            if (!q.empty() && q.front() < c[i + 1] && i == m - 2 && s.length() != 1) {
                c[m - 1] = q.front();
            }

        }

        for (int i = 0; i < m; i++) {
            s[ind[i]-1] = c[i];
        }

        cout << s << endl;
    }
}