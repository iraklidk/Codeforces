//IrakliDK
//https://codeforces.com/problemset/problem/1919/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		string s; cin >> s;
		int countPlus = 0, countMinus = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '+') countPlus++;
			else countMinus++;
		}
		cout << abs(countPlus - countMinus) << endl;
	}
}