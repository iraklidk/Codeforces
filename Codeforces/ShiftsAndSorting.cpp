//IrakliDK
//https://codeforces.com/problemset/problem/1969/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		string s; cin >> s;

		long long ans = 0;
		long long sizeOne = 0;
		for (int i = 0; i < s.size() - 1; i++) {
			if (s[i] == '1') {
				sizeOne++;
			}
			if (s[i + 1] == '0' && sizeOne != 0) {
				ans += sizeOne + 1;
			}
		}
		cout << ans << endl;
	}
}

// 01101001
// 00111001 3
// 00011101 4
// 00001111 4

// 01010101
// 00110101 2
// 00011101 3
// 00001111 4