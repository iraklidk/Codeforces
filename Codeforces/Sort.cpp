//IrakliDK
//https://codeforces.com/contest/1996/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n, q; cin >> n >> q;
		string a, b; cin >> a >> b;
		vector<pair<int, int> > vec(q);
		for (int i = 0; i < q; i++) {
			int a1, b1;
			cin >> a1 >> b1;
			vec[i].first = a1;
			vec[i].second = b1;
		}

		vector<vector<int> > prefa(n + 1, vector<int>(26));
		vector<vector<int> > prefb(n + 1, vector<int>(26));
		for (int i = 0; i < n; i++) {
			prefa[i + 1] = prefa[i];
			int char_id = a[i] - 'a';
			prefa[i + 1][char_id]++;

			prefb[i + 1] = prefb[i];
			int char_idb = b[i] - 'a';
			prefb[i + 1][char_idb]++;

		}

		for (int i = 0; i < q; i++) {
			int ans = 0;
			int l = vec[i].first - 1;
			int r = vec[i].second - 1;

			for (int k = 0; k < 26; k++) {
				int freqa = prefa[r + 1][k] - prefa[l][k];
				int freqb = prefb[r + 1][k] - prefb[l][k];

				if (freqa != freqb) ans += abs(freqa - freqb);
			}

			cout << ans / 2 << endl;
		}	
	}
	return 0;
}