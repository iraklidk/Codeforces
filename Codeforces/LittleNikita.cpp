//IrakliDK
//https://codeforces.com/problemset/problem/1977/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n, m;
		cin >> n >> m;

		if (n >= m && (n - m) % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
}