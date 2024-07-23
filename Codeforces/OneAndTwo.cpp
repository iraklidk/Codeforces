//IrakliDK
//https://codeforces.com/contest/1788/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		vector<int> pref(n + 1);
		pref[0] = 0;
		for (int i = 1; i <= n; i++) {
			if (vec[i - 1] == 2)
				pref[i] = pref[i - 1] + 1;
			else pref[i] = pref[i - 1];
		}

		int ans = -1;
		for (int k = 1; k <= n; k++) {
			if (pref[k] == pref[n] - pref[k]) {
				ans = k;
				break;
			}
		}

		cout << ans << endl;
	}
}
