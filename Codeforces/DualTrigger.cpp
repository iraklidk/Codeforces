//IrakliDK
//https://codeforces.com/problemset/problem/1951/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n; string s; cin >> s;
		int one = 0, zero = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') one++;
			else zero++;
		}

		if (one != 2) {
			if ((n % 2 == 0 && one % 2 == 0 && n != 2) || (n % 2 == 1 && one % 2 == 0)) {
				cout << "YES" << endl;
			}
			else if (n == 2 && s == "00") cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else {
			string ans = "YES";
			for (int i = 0; i < n - 1; i++) {
				if (s[i] == '1' && s[i + 1] == '1') {
					ans = "NO";
					break;
				}
			}
			cout << ans << endl;
		}

	}
}