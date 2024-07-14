//IrakliDK
//https://codeforces.com/problemset/problem/1992/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n, m, k;
		cin >> n >> m >> k;
		vector<int> ans(n);

		int num = 1;
		for (int i = n - m; i < n; i++) {
			ans[i] = num;
			num++;
		}

		num = n;
		for (int i = 0; i < n - m; i++) {
			ans[i] = num;
			num--;
		}

		for (int i : ans) {
			cout << i << " ";
		}
		cout << endl;
	}
}