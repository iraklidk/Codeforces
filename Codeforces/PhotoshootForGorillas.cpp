//IrakliDK
//https://codeforces.com/contest/2000/problem/E

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
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpii;

int main()
{
	int tc; cin >> tc;
	while(tc--) {

		int n, m, k; cin >> n >> m >> k;
		int w; cin >> w;
		vll vec(w);
		forr (i, w) {
			cin >> vec[i];
		}

		vll points(m* n);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				points.push_back((min(i, n - k) - max(0, i - k + 1) + 1) * (min(j, m - k) - max(0, j - k + 1) + 1));
			}
		}

		rsortVec(vec);
		rsortVec(points);

		ll ans = 0;

		forr(i, w) {
			ans += points[i] * vec[i];
		}

		cout << ans << endl;
	}
}