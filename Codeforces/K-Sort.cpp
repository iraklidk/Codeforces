//IrakliDK
//https://codeforces.com/problemset/problem/1987/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		long long ans = 0;
		long long maxDiff = INT_MIN;

		for (int i = 0; i < n - 1; i++) {

			if (vec[i] > vec[i + 1]) {
				int diff = abs(vec[i] - vec[i + 1]);
				ans += diff;
				if (diff > maxDiff)
					maxDiff = diff;
				vec[i + 1] = vec[i];
			}

		}
		maxDiff = maxDiff < 0 ? 0 : maxDiff;
		cout << ans + maxDiff << endl;
	}
}