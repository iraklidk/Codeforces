//IrakliDK
//https://codeforces.com/problemset/problem/1894/B

#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
#define no cout << "NO" << "\n"
#define yes cout << "YES" << "\n"
#define forr(i, n) for(int i=0;i<n;i++)
#define sortVec(vec) sort(vec.begin(), vec.end())
#define rsortVec(vec) sort(vec.rbegin(), vec.rend())
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
typedef vector<pair<int, int>> vpii;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vi vec(n);
		map<int, pair<int, int> > mp;
		int countGreaterThanTwo = 0;
		int idx1 = 0, idx2 = 0;
		bool a = 0, b = 0;
		forr(i, n) {
			cin >> vec[i];
			mp[vec[i]].first++;
			mp[vec[i]].second = i;
			if (mp[vec[i]].first > 1 && !a) {
				a = 1;
				idx1 = i;
			}
			if (mp[vec[i]].first > 1 && vec[i] != vec[idx1]) {
				b = 1;
				idx2 = i;
			}
		}

		for (auto p : mp) {
			if (p.second.first > 1) countGreaterThanTwo++;
		}

		if (countGreaterThanTwo < 2) cout << -1 << endl;

		else {
			vi arr(n, 1);

			arr[idx1] = 2;
			arr[idx2] = 3;

			for (int i : arr) {
				cout << i << " ";
			}

			cout << endl;

		}

	}
}

// 1 2 3 4 13 17 18 19 10 4 28 30 4 18
// 1 1 1 1 1  1   1 1   1 2  1  1 1  3  
// 1 1 1 7 7 7 9 9 9
// 1 2 2 1 3 2 2 2 2