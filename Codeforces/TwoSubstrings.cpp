//IrakliDK
//https://codeforces.com/contest/550/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(string& str) {

	if (str.size() < 4) {
		cout << "NO" << endl;
		return;
	}
	int countA = 0, countB = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A') countA++;
		if (str[i] == 'B') countB++;
	}

	map<string, int> map;

	for (int i = 1; i < str.size() - 1; i++) {
		if (str[i - 1] == 'A' && str[i] == 'B' && str[i + 1] == 'A') {
			map["ABA"]++;
			i++;
		}
		if (str[i - 1] == 'B' && str[i] == 'A' && str[i + 1] == 'B') {
			map["BAB"]++;
			i++;
		}

	}

	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == 'A' && str[i + 1] == 'B') {
			map["AB"]++;
			i++;
			continue;
		}
		if (str[i] == 'B' && str[i + 1] == 'A') {
			map["BA"]++;
			i++;
		}
	}

	if (map["AB"] == 2 && map["BA"] == 0 && countB == 2 && countA == 2) {
		cout << "NO" << endl;
		return;
	}

	if (map["BA"] == 2 && map["AB"] == 0 && countA == 2 && countB == 2) {
		cout << "NO" << endl;
		return;
	}

	if (map["AB"] > 0 && map["BA"] > 0) {
		cout << "YES" << endl;
		return;
	}

	if (map["AB"] > 1 && map["BA"] == 0 && map["ABA"] > 0) {
		cout << "YES" << endl;
		return;
	}

	if (map["BA"] > 1 && map["AB"] == 0 && map["BAB"] > 0) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
		string s;
		cin >> s;

		solve(s);
}