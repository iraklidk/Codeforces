//IrakliDK
//https://codeforces.com/problemset/problem/1992/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n, k;
		cin >> n >> k;
		vector<int> vec(k);
		for (int i = 0; i < k; i++) {
			cin >> vec[i];
		}

		int ans = 0;
		sort(vec.begin(), vec.end());

		for (int i = 0; i < k - 1; i++) {
			if (vec[i] == 1) {
				vec[k - 1]++;
				ans += 1;

			}
			if (vec[i] != 1) ans += vec[i] + vec[i] - 1;

		}

		cout << ans << endl;

	}
}