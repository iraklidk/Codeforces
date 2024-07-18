//IrakliDK
//https://codeforces.com/problemset/problem/1921/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n; string s, f; cin >> s >> f;

		int countZeroS = 0, countOneS = 0, countZeroF = 0, countOneF = 0;
		for (int i = 0; i < n; i++) {
			if (f[i] == '1') countOneF++;
			if (s[i] == '1') countOneS++;
			if (s[i] == '1' && f[i] == '1') {
				countOneF--;
				countOneS--;
			}
		}

		cout << max(countOneF, countOneS) << endl;

	}
}