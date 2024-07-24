//IrakliDK
//https://codeforces.com/problemset/problem/1950/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		string s; cin >> s;

		if ((s[0] == '1' && s[1] - '0' >= 2) || s[0] == '2' || (s[0] == '0' && s[1] == '0')) {
			if (s[0] == '1' && s[1] == '2') {
				cout << s << " " << "PM" << endl;
			}
			else {
				string k = "";
				k += s[0];
				k += s[1];
				int c = stoi(k);
				c = abs(c - 12);
				string an;
				if (s[0] == '0' && s[1] == '0') an = "AM";
				else an = "PM";
				s[0] = ((c / 10) % 10) + '0';
				s[1] = (c % 10) + '0';
				cout << s << " " << an << endl;
			}
		}
		else {
			cout << s << " AM" << endl;
		}
	}

	return 0;
}