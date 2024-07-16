//IrakliDK
//https://codeforces.com/problemset/problem/1971/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		string s;
		cin >> s;
		set<char> set;
		for (int i = 0; i < s.size(); i++) {
			set.insert(s[i]);
		}

		if (set.size() <= 1) cout << "NO" << endl;
		else {
			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] != s[i + 1]) {
					cout << "YES" << endl;
					swap(s[i], s[i + 1]);
					cout << s << endl;
					break;
				}
			}
		}

	}
}