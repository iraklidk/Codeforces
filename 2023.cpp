//IrakliDK
//https://codeforces.com/problemset/problem/1916/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, k; cin >> n >> k;
		vector<int> vec(n);
		int prod = 1;
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		for (int i = 0; i < n; i++) {
			prod *= vec[i];
			if (prod > 2023) break;
		}

		if (2023 % prod == 0) {
			cout << "YES" << endl;
			cout << 2023 / prod << " ";
			for (int i = 0; i < k-1; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		else cout << "NO" << endl;
	}
}

// 2023 -> 1 7 17 119 289 2023