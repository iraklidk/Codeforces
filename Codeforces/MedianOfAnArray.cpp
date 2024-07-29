//IrakliDK
//https://codeforces.com/problemset/problem/1946/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main()
{
    int tc; cin >> tc;
    while (tc--) {

        int n; cin >> n;
        vi vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int ans = 1;
        for (int i = (n % 2 == 0 ? n / 2 - 1 : n / 2); i < n - 1; i++) {
            if (vec[i] == vec[i + 1]) ans++;
            else break;
        }
        
        cout << ans << endl;
    }
}