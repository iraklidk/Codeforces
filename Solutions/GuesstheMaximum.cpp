//IrakliDK
//https://codeforces.com/problemset/problem/1979/A

#include <bits/stdc++.h>
using namespace std;


int main()
{

	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		int ans = INT_MAX;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		for (int i = 0; i < n-1; i++) {
			int tmp = max(vec[i], vec[i + 1]);
			ans = min(tmp, ans);
		}

		cout << ans - 1 << endl;

	}

}