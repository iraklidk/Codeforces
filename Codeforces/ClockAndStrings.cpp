//IrakliDK
//https://codeforces.com/problemset/problem/1971/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (a == c || a == d || b == c || b == d) cout << "YES";

		else {
			if (a == 12) a = 0;
			if (b == 12) b = 0;
			if (c == 12) c = 0;
			if (d == 12) d = 0;

			int maxima = max(a, b);
			int minima = min(a, b);

			if ((c == 0 && (d <= maxima && d >= minima)) || (d == 0 && (c <= maxima && c >= minima))) cout << "YES" << endl;
			else if ((a == 0 && (c > minima && d < minima)) || (a == 0 && (d > minima && c < minima))) cout << "YES" << endl;
			else if ((b == 0 && (c > minima && d < minima)) || (b == 0 && (d > minima && c < minima))) cout << "YES" << endl;
			else if (c >= minima && c <= maxima && (d <= minima || d >= maxima)) cout << "YES" << endl;
			else if (d >= minima && d <= maxima && (c <= minima || c >= maxima)) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}