//IrakliDK
//https://codeforces.com/problemset/problem/1929/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, k; cin >> n >> k;

		if (k % 2 == 1 || k / 2 >= 2 * n - 1) cout << k / 2 + 1 << endl;
		else if (k / 2 < 2 * n - 1) cout << k / 2 << endl;

	}
}