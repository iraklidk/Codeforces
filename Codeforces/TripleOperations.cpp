//IrakliDK
//https://codeforces.com/contest/1999/problem/E
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

ll maxx(ll a, ll b) {
	if (a > b) return a;
	else return b;
}

ll minn(ll a, ll b) {
	if (a > b) return b;
	else return a;
}

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int l, r; cin >> l >> r;

		int pwr = 0;
		ll next = l + 1;
		ll k = l;

		while (k > 0) {
			pwr += 2;
			k /= 3;
		}

		ll ans = pwr;
		ll z = 0;
		ll now = 1;
		ll tmp = ++l;

		while (tmp > 0) {
			tmp /= 3;
			now *= 3;
			z += 1;
		}

		while (now <= r) {
			ans += (minn((r + 1), now) - maxx(l, now / 3)) * z;
			now *= 3;
			z++;
		}

		ans += (minn(r + 1, now) - maxx(l, now / 3)) * z;

		cout << ans << endl;
	}
}