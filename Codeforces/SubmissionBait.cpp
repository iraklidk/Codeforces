//IrakliDK
//https://codeforces.com/contest/1990/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		int max = 0;
		map<int, int> map;
		for (int i = 0; i < n; i++) {
			map[vec[i]]++;
			if (vec[i] > max) {
				max = vec[i];
			}
		}
		string ans = "NO";
		if (map[max] % 2 == 1 && max != 0) cout << "YES" << endl;
		else if (map[max] % 2 == 0 && max != 0) {
			for (int i = n - 1; i >= 0; i--) {
				if (map[i] > 0 && map[i] % 2 == 1)
					ans = "YES";
			}
			cout << ans << endl;
		}
		else if (max == 0 && n % 2 == 1) cout << "YES" << endl;
		else if (max == 0 && n % 2 == 0) cout << "NO" << endl;

	}
}