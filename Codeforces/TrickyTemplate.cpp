//IrakliDK
//https://codeforces.com/contest/1922/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		string a, b, c; cin >> a >> b >> c;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (c[i] != a[i] && c[i] != b[i]) {
				ans++;
			}
		}
		
		cout << (ans > 0 ? "YES" : "NO") << endl;
	}
	return 0;
}