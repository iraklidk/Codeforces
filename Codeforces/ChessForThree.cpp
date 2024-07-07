//IrakliDK
//https://codeforces.com/problemset/problem/1973/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		int ans = 0;

		while (p2 >= 0 || p1 >= 0) {

			if (p1 == p2 && p2 == p3 && p2 != 0) {
				p1--;
				p2--;
				ans++;
			}

			if (p1 == 0 && p2 == 0) {
				if (p3 % 2 == 0) break;
				else {
					ans = -1;
					break;
				}
			}

			if (p1 > p2) {
				p3--;
				p1--;
				ans++;
			}

			else {
				p3--;
				p2--;
				ans++;
			}

		}
		cout << ans << endl;
	}
}