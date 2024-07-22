//IrakliDK
//https://codeforces.com/problemset/problem/1927/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		string ans = "";
		map <char, int> map;
		for (char ch = 'a'; ch <= 'z'; ch++) {
			map[ch] = -1;
		}

		for (int i = 0; i < n; i++) {
			for (auto p : map) {
				if (p.second == vec[i] - 1) {
					map[p.first]++;
					ans += p.first;
					break;
				}
			}
		}

		cout << ans << endl;
	}
}

// 0 0 0 1 0 2 0 3 1 1 4