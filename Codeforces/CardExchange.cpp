//IrakliDK
//https://codeforces.com/problemset/problem/1966/A

#include <bits/stdc++.h>
using namespace std;

bool noOperation(vector<int> vec, int k) {
	map<int, int> map;
	for (int num : vec) {
		map[num]++;
	}
	for (auto p : map) {
		if (p.second >= k) return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n, k; cin >> n >> k;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		int ans;
		
		if (noOperation(vec, k)) {
			ans = n;
		}
		else {
			ans = k - 1;
		}
		
		cout << ans << endl;
	}
}