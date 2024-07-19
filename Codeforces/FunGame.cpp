//IrakliDK
//https://codeforces.com/contest/1994/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		string s, t;
		cin >> s >> t;
		string ans = "YES";
		if (s == t) {
			cout << "YES" << endl;
		}
		else if (s[0] == '0' && t[0] == '1') cout << "NO" << endl;
		else {
			int countOneS = 0;
			int countOneT = 0;
			for (int i = 0; i < n; i++) {
				if (s[i] == '1') countOneS++;
				if (t[i] == '1') countOneT++;
				if (countOneS == 0 && t[i] == '1') {
					ans = "NO";
					break;
				}
			}
			cout << ans << endl;
		}
	}
}