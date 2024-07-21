//IrakliDK
//https://codeforces.com/problemset/problem/1913/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		string ab; cin >> ab;
		string bigger = "", smaller = "";
		int idx = 0;
		for (int i = 1; i <= ab.size() / 2; i++) {
			if (ab[i] != '0') {
				idx = i;
				break;
			}
		}
		if (idx != 0) {
			for (int i = 0; i < idx; i++) {
				smaller += ab[i];
			}
			for (int i = idx; i < ab.size(); i++) {
				bigger += ab[i];
			}
			int a = stoi(smaller);
			int b = stoi(bigger);
			if (a == b || a >= b) cout << -1 << endl;
			else
			cout << a << " " << b << endl;
		}
		else cout << -1 << endl;
	}
}