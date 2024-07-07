//IrakliDK
//https://codeforces.com/problemset/problem/1969/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		int ans = 3;
		for (int i = 0; i < n - 1; i++) {
			if (vec[vec[i] - 1] == i + 1) ans = 2;
		}

		cout << ans << endl;
	}
}

// 3 4 1 2
