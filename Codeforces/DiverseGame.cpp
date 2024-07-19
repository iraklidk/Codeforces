//IrakliDK
//https://codeforces.com/contest/1994/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n, m;
		cin >> n >> m;
		vector<vector<int>> vec(n, vector<int>(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> vec[i][j];
			}
		}

		if (n == m && m == 1) {
			cout << -1 << endl;
		}

		else {

			if (n == 1) {
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < m - 1; j++) {
						swap(vec[i][j], vec[i][j + 1]);
					}
				}
			}
			else if (m == 1) {
				for (int i = 0; i < n - 1; i++) {
					for (int j = 0; j < m; j++) {
						swap(vec[i][j], vec[i + 1][j]);
					}
				}
			}
			else {

				for (int i = 0; i < n - 1; i++) {
					for (int j = 0; j < m - 1; j++) {
						swap(vec[i][j], vec[i + 1][j]);
					}
				}
				for (int i = 0; i < n - 1; i++) {
					swap(vec[i][m - 1], vec[i + 1][m - 1]);
				}

			}

			for (vector<int> vect : vec) {
				for (int i : vect) {
					cout << i << " ";
				}
				cout << endl;
			}
		}
	}
}