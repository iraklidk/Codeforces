//IrakliDK
//https://codeforces.com/contest/1927/problem/C

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& a, vector<int>& b, int k) {

	set<int> setA;
	set<int> setB;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] <= k) setA.insert(a[i]);
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] <= k) setB.insert(b[i]);
	}

	set<int> set;
	for (int i : setA) {
		set.insert(i);
	}
	for (int i : setB) {
		set.insert(i);
	}

	return (setA.size() >= k / 2 && setB.size() >= k / 2 && set.size() == k);
}

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, m, k; cin >> n >> m >> k;
		vector<int> a(n);
		vector<int> b(m);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}

		bool ans = isPossible(a, b, k);

		cout << (ans ? "YES" : "NO") << endl;
	}
}

// 2 3 5 6
// 1 3 4 5