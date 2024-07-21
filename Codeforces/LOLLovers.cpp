//IrakliDK
//https://codeforces.com/problemset/problem/1912/L

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	string s; cin >> s;

	int countL = 0, countO = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') countL++;
		else countO++;
	}

	int takedL = 0, takedO = 0;
	bool t = 0;

	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'L') takedL++;
		if (s[i] == 'O') takedO++;
		if ((takedL != countL - takedL) && (takedO != countO - takedO)) {
			t = 1;
			break;
		}
	}

	cout << (t ? takedL + takedO : -1) << endl;
}

//LLLLLOOOOO