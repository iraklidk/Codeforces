//IrakliDK
//https://codeforces.com/problemset/problem/1937/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		int ans = 0;
		while (n > 0) {
			ans++;
			n /= 2;
		}
		int res = 1;
		for (int i = 0; i < ans - 1; i++) {
			res *= 2;
		}
		cout << res << endl;
	}
} 