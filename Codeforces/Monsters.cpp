//IrakliDK
//https://codeforces.com/problemset/problem/1849/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

bool sortAlg(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}

int main()
{
    int tc; cin >> tc;
    while (tc--) {

        int n, k; cin >> n >> k;
        vi vec(n);
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a % k == 0) vec[i] = k;
            else vec[i] = a % k;
        }

        vector<pair<int, int>> ans(n);
        for (int i = 0; i < n; i++) {
            pair<int, int> pair1;
            pair1.first = vec[i];
            pair1.second = i + 1;
            ans[i] = (pair1);
        }

        sort(ans.rbegin(), ans.rend(), sortAlg);

        for (pair<int, int> pair1 : ans) {
            cout << pair1.second << " ";
        }
        cout << endl;

    }
}