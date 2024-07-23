//IrakliDK
//https://codeforces.com/contest/1927/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		string s; cin >> s;

		int start = 0;
		int end = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == 'B') {
				end = i;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (s[i] == 'B') {
				start = i;
				break;
			}
		}

		cout << end - start + 1 << endl;
	}
}
