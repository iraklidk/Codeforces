//IrakliDK
//https://codeforces.com/contest/1988/problem/B

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
		string s;
		cin >> s;

		int countZero = 0;
		int countOne = 0;


		string str = "";
		bool zero = false;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0' && zero == false) {
				str += '0';
				zero = true;
			}
			if (s[i] == '1') {
				str += '1';
				zero = false;
			}
		}


		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '1') countOne++;
			else countZero++;
		}

		if (countOne > countZero) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}