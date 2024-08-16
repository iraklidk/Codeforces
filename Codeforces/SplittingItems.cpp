//IrakliDK
//https://codeforces.com/contest/2004/problem/C

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
	while (tc--) {

		int n, k; cin >> n >> k;
		vi vec(n);
		forr(i, n) {
			cin >> vec[i];
		}

		sortVec(vec);
		ll ans = 0;

		for (int i = n - 2; i >= 0; i -= 2) {
			int diff = vec[i + 1] - vec[i];

			if (k > 0) {
				int tmp = min(diff, k);
				vec[i] += tmp;
				k -= tmp;
			}

			diff = vec[i + 1] - vec[i];
			ans += diff;
		}

		if (n % 2 == 1) ans += vec[0];			

		cout << ans << endl;
	}
}