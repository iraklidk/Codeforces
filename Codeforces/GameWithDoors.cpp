//IrakliDK
//https://codeforces.com/contest/2004/problem/B

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

		int a, b, c, d; cin >> a >> b >> c >> d;
		ll ans = 0;

		if (a == c && b == d) {
			ans = b - a;
		}

		else if (b < c || d < a) {
			ans = 1;
		}

		else if (b == d || a == c) {
			if (a == c) {
				ans = min(b, d) - a + 1;
			}
			else ans = b - max(a, c) + 1;
		}

		else if ((a > c && b < d) || (c > a && d < b)) {
			if (a > c) {
				ans = b - a + 2;
			}
			else {
				ans = d - c + 2;
			}
		}

		else if (b >= c && b <= d) {
			ans = b - c + 2;
		}
		else {
			ans = d - a + 2;
		}

		cout << ans << endl;
	}
}