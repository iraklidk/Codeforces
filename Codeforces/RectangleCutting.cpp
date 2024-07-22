//IrakliDK
//https://codeforces.com/problemset/problem/1928/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int a, b; cin >> a >> b;

		string ans = "YES";

		if (a % 2 == 1 && b % 2 == 1) ans = "NO";

		if (a % 2 == 0 && a / 2 == b && 2 * b == a) ans = "NO";

		if (b % 2 == 0 && b / 2 == a && 2 * a == b) ans = "NO";

		if (a % 2 == 0 && a / 2 != b && 2 * b != a) ans = "YES";

		if (b % 2 == 0 && b / 2 != a && 2 * a != b) ans = "YES";
		
		cout << ans << endl;

	}
}