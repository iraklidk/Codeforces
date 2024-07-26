//IrakliDK
//https://codeforces.com/contest/1996/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, k; cin >> n >> k;
		vector<vector<int> > vec(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			if(i % k == 0) {
				for (int j = 0; j < s.size(); j++) {
					if (j % k == 0) cout << s[j];
				}
				cout << endl;
			}
		}

	}
	return 0;
}