//IrakliDK
//https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
using namespace std;

bool isOrNo(int n, int a, int b, long long curr) {
	if (b == 1) return true;
	if (a == 1 && (n - 1) % b != 0) return false;
	if (a == 1 && (n - 1) % b == 0) return true;

	while (curr <= n) {
		if ((n - curr) % b == 0) {
			return true;
		}
		curr *= a;
	}
	return false;
}

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, a, b; cin >> n >> a >> b;

		long long curr = 1;

		bool ans = isOrNo(n, a, b, curr);

		cout << (ans ? "YES" : "NO") << endl;
	}
}

// 768093662 48 46

// 826107259 38 48