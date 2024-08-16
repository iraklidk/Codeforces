//IrakliDK
//https://codeforces.com/contest/1740/problem/B

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
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vpii vec(n);
		forr(i, n) {
			cin >> vec[i].first;
			cin >> vec[i].second;
			if (vec[i].first > vec[i].second) {
				int tmp = vec[i].first;
				vec[i].first = vec[i].second;
				vec[i].second = tmp;
			}
		}

		ll ans = 0;
		sort(vec.begin(), vec.end(), sortbysec);
		vec.push_back(vec[0]);

		for (int i = 1; i <= n; i++) {
			ans += 2 * min(vec[i].first, vec[i].second);
			if (i > 1)
				ans += abs(max(vec[i].first, vec[i].second) - max(vec[i - 1].first, vec[i - 1].second));
		}

		ans += vec[1].second;
		ans += vec[n].second;

		cout << ans << endl;
	}
}