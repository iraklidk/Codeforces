//IrakliDK
//https://codeforces.com/problemset/problem/1974/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int x, y;
		cin >> x >> y;
		int ans = 0;

		if (y % 2 == 0) {
			ans = y / 2;
			int rest = x - ans * 7;
			if (rest > 0) {
				if (rest % 15 != 0)
					ans += rest / 15 + 1;
				else ans += rest / 15;
			}
		}

		if (y % 2 == 1) {
			ans = y / 2 + 1;
			int rest = x - (ans - 1) * 7 - 11;
			if (rest > 0) {
				if (rest % 15 != 0)
					ans += rest / 15 + 1;
				else ans += rest / 15;
			}
		}

		cout << ans << endl;
	}
}