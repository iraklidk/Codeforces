//IrakliDK
//https://codeforces.com/contest/2000/problem/D

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
		vi vec(n);
		forr(i, n) {
			cin >> vec[i];
		}
		string s; cin >> s;

		ll ans = 0;
		queue<int> l;
		stack<int> r;
		vll pref(n + 1);

		for (int i = 1; i <= n; i++) {
			pref[i] = pref[i - 1] + vec[i - 1];
		}

		forr(i, n) {
			if (s[i] == 'L') l.push(i);
			else r.push(i);
		}

		while (l.size() > 0 && r.size() > 0) {
			if (l.front() < r.top()) {
				ans += pref[r.top() + 1] - pref[l.front()];
				l.pop();
				r.pop();
			}
			else {
				l.pop();
			}
		}

		cout << ans << endl;
	}
}