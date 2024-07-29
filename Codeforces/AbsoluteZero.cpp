//IrakliDK
//https://codeforces.com/contest/1991/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc; cin >> tc;
    while (tc--) {

        int n; cin >> n;
        int k = 0;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            if (i > 0 && (vec[i] % 2 != vec[0] % 2)) {
                k = -1;
            }
        }

        if (k == -1) {
            cout << -1 << endl;
            continue;
        }

        bool check = false;
        vector<ll> ans;

        for (int i = 1; i <= 40; i++) {
            ll maxima = INT_MIN;
            ll minima = INT_MAX;
            int count = 0;

            for (int i = 0; i < n; i++) {
                maxima = max(vec[i], maxima);
                minima = min(vec[i], minima);
            }
            ans.push_back((minima + maxima) / 2);


            for (int j = 0; j < n; j++) {
                vec[j] = abs((minima + maxima) / 2 - vec[j]);
                if (vec[j] == 0) count++;
            }

            if (count == n) {
                cout << i << endl;
                check = true;
                break;
            }

        }

        if (!check)
            cout << -1 << endl;
        else {
            for (ll i : ans) {
                cout << i << " ";
            }
            cout << endl;
        }

    }
}