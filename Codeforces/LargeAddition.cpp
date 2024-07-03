//IrakliDK
//https://codeforces.com/problemset/problem/1984/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool checkFirstDigit(long long x) {
	while (x > 9) {
		x /= 10;
	}

	return x == 1;
}

bool checkZero(long long x) {
	x /= 10;
	while (x > 0) {
		if (x % 10 == 0) return false;
		x /= 10;
	}

	return true;
}

bool Solve(long long x) {

	if (x <= 9 || x % 10 == 9 || (x / 10 % 10 == 0)) return false;

	if (!checkFirstDigit(x)) return false;

	if (!checkZero(x)) return false;

	return true;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testcase;
	cin >> testcase;


	while (testcase--) {

		long long x;
		cin >> x;

		string s = Solve(x) == 1 ? "YES" : "NO";

		cout << s << endl;

	}
}