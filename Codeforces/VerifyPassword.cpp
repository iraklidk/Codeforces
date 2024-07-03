//IrakliDK
//https://codeforces.com/problemset/problem/1976/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		bool yes = 1;

		for (int i = 0; i < s.length(); i++) {
			if (!isalnum(s[i])) {
				cout << "NO" << endl;
				yes = 0;
				break;
			}
			if (s[i] > 'z' || s[i] < '0' || (s[i] > '9' && s[i] < 'a')) {
				cout << "NO" << endl;
				yes = 0;
				break;
			}
			if (s[i] >= 'a' && s[i] <= 'z' && (s[i + 1] >= '0' && s[i + 1] <= '9')) {
				cout << "NO" << endl;
				yes = 0;
				break;
			}
			if (s[i] > '0' && s[i] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9' && s[i] - '0' > s[i + 1] - '0') {
				cout << "NO" << endl;
				yes = 0;
				break;
			}
			else if (s[i] > 'a' && s[i] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z' && s[i] > s[i + 1]) {
				cout << "NO" << endl;
				yes = 0;
				break;
			}
		}
		if (yes) cout << "YES" << endl;
	}
}