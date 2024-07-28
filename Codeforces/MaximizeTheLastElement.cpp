//IrakliDK
//https://codeforces.com/contest/1991/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int tc; cin >> tc;
    while (tc--) {

        int n; cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int maxima = INT_MIN;
        if (n == 1) cout << vec[0] << endl;
        else {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0 && maxima < vec[i]) {
                    maxima = vec[i];
                }
            }
            cout << maxima << endl;
        }

    }
}