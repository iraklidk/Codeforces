//IrakliDK
//https://codeforces.com/contest/1988/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n, k;
		cin >> n >> k;


		int i = 0;
		int u = n;
		while (u > k) {
			i += 1;
			u -= k - 1;
		}

		if (n == 1) cout << 0 << endl;
		else if (n <= k) cout << 1 << endl;
		else {
			cout << i + 1 << endl;
		}
	}
}