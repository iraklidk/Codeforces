//IrakliDK
//https://codeforces.com/problemset/problem/1955/B

#include <bits/stdc++.h>
using namespace std;

int minInVec(vector<vector<int> >& vec) {
	int minimal = INT_MAX;
	for (vector<int> vect : vec) {
		for (int i : vect) {
			minimal = min(i, minimal);
		}
	}
	return minimal;
}

bool progressiveSquare(vector<vector<int> >& vec, int c, int d) {

	int n = vec.size();
	map<int, int> map;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[vec[i][j]]++;
		}
	}

	vec[0][0] = minInVec(vec);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			vec[i + 1][j] = vec[i][j] + c;
			vec[i][j + 1] = vec[i][j] + d;
		}
	}
	vec[n - 1][n - 1] = vec[n - 1][n - 2] + d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[vec[i][j]] == 0) return false;
			if (map[vec[i][j]] != 0)
				map[vec[i][j]]--;
		}
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n, c, d;
		cin >> n >> c >> d;
		vector<vector<int> > vec(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> vec[i][j];
			}
		}

		bool ans = progressiveSquare(vec, c, d);
		if (ans) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}