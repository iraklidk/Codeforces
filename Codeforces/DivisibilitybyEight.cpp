//IrakliDK
//https://codeforces.com/problemset/problem/1955/B

#include <bits/stdc++.h>
using namespace std;

void divEight(string& str) {
	int n = str.size();
	for (int i = 0; i < n; i++) {
		if (str[i] == '8' || str[i] == '0') {
			cout << "YES" << endl;
			cout << str[i] << endl;
			return;
		}
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			string l = "";
			l += str[n - 1 - j];
			l += str[n - 1 - i];
			if (stoi(l) % 8 == 0) {
				cout << "YES" << endl;
				cout << stoi(l) << endl;
				return;
			}
		}
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				string s = "";
				s += str[n - 1 - k];
				s += +str[n - 1 - j];
				s += str[n - 1 - i];
				if (stoi(s) % 8 == 0) {
					cout << "YES" << endl;
					cout << stoi(s) << endl;
					return;
				}
			}
		}
	}

	cout << "NO" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

		string str;
		cin >> str;

		divEight(str);
}
