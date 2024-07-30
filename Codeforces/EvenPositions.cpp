//IrakliDK
//https://codeforces.com/contest/1997/problem/C

#include <bits/stdc++.h>
#define no cout << "NO" << "\n"
#define yes cout << "YES" << "\n"
#define forr(i, n) for(int i=0;i<n;i++)
#define sortVec(vec) sort(vec.begin(), vec.end())
#define rsortVec(vec) sort(vec.rbegin(), vec.rend())
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<ll>> vll;
typedef vector<vector<int>> vvi;

int main()
{

    int tc; cin >> tc;
    while (tc--) {

        ll n; cin >> n;
        string s; cin >> s;

        ll countOpen = 1;
        ll price = 0;
        s[0] = '(';

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '(') countOpen++;
            else if (s[i] == '_' && countOpen > 0) {
                s[i] = ')';
            }
            else if (s[i] == '_' && countOpen == 0) {
                s[i] = '(';
                countOpen++;
            }
            if (s[i] == ')') countOpen--;
        }

        stack<int> idx;
        idx.push(1);
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '(') idx.push(i + 1);
            else if (s[i] == ')') {
                int tmp = idx.top();
                price += i + 1 - tmp;
                idx.pop();
            }
        }

        cout << price << endl;

    }
}