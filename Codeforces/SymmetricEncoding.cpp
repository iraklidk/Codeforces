//IrakliDK
//https://codeforces.com/problemset/problem/1974/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		string b;
		cin >> b;

		set<char> set;
		for (int i = 0; i < n; i++) {
			set.insert(b[i]);
		}
		string r = "";
		for (char ch : set) {
			r += ch;
		}

		map<char, char> chars;
		for (int i = 0; i < r.size() / 2; i++) {
			chars[r[i]] = r[r.size() - 1 - i];
			chars[r[r.size() - 1 - i]] = r[i];
		}
		if (r.size() % 2 == 1) {
			chars[r[r.size() / 2]] = r[r.size() / 2];
		}


		for (int i = 0; i < n; i++) {
			b[i] = chars[b[i]];
		}
		cout << b << endl;
	}
}