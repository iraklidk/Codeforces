//IrakliDK
//https://codeforces.com/contest/2000/problem/C

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

		ll n; cin >> n;
		vll vec(n);
		forr(i, n) {
			cin >> vec[i];
		}

		ll m; cin >> m;
		vs arr(m);

		forr(i, m) {
			map<char, ll> mp;
			string ans = "YES";
			string s; cin >> s;

			if (s.size() != vec.size()) {
				ans = "NO";
			}

			else {
				set<int> sets;
				forr(i, s.size()) {
					if (!mp[s[i]] && !sets.count(vec[i])) {
						sets.insert(vec[i]);
						mp[s[i]] = vec[i];
					}
					if (mp[s[i]] != vec[i]) {
						ans = "NO";
						break;
					}

				}
			}

			cout << ans << endl;
		}
	}
}