//IrakliDK
//https://codeforces.com/contest/1927/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, k; cin >> n >> k;
		int ans = 0;

		if (k == n * n) ans = 2 * n - 1;
		else if (k == n) ans = 1;
		else if (k == 0) ans = 0;
		else {
			ans++;
			k -= n;
			n--;
			while (k > 0 && n > 0) {
				if (n < k) {
					k = k - 2 * n;
					ans += 2;
					n--;
				}
				else {
					ans++;
					break;
				}
			}
		}
		cout << ans << endl;
	}
}