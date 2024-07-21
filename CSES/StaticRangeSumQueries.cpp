//IrakliDK
//https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, q; cin >> n >> q;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	vector<pair<int, int>> queries;
	for (int i = 0; i < q; i++) {
		int a, b;
		pair<int, int> pair1;
		cin >> a;
		cin >> b;
		pair1.first = a;
		pair1.second = b;
		queries.push_back(pair1);
	}

	vector<long long> pref(n + 1);
	for (int i = 1; i < n + 1; i++) {
		pref[i] = pref[i - 1] + vec[i - 1];
	}

	for (int i = 0; i < queries.size(); ++i) {
		cout << pref[queries[i].second] - pref[queries[i].first - 1] << endl;
	}
}
