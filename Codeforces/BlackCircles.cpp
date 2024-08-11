//IrakliDK
//https://codeforces.com/contest/2002/problem/C

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

		int n; cin >> n;
		vpll centers(n);
		forr(i, n) {
			cin >> centers[i].first;
			cin >> centers[i].second;
		}
		ll x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		ll distance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		string ans = "YES";
		vi distances(n);

		forr(i, n) {
			if ((x2 - centers[i].first) * (x2 - centers[i].first) + (y2 - centers[i].second) * (y2 - centers[i].second) <= distance) {
				ans = "NO";
			}

		}

		cout << ans << endl;
	}
}