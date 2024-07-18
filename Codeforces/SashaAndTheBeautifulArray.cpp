//IrakliDK
//https://codeforces.com/problemset/problem/1929/A

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
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		int ans = 0;

		sort(vec.begin(), vec.end());

		for (int i = 1; i < n; i++) {
			ans += vec[i] - vec[i - 1];
		}

		cout << ans << endl;
	}
}