//IrakliDK
//https://codeforces.com/contest/2004/problem/A

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
		string ans = "NO";
		if (n == 2 && abs(vec[1] - vec[0] > 1)) ans = "YES";
		sortVec(vec);
		map<int, int> mp;

		forr(i, n) {
			mp[vec[i]]++;
		}

		if (mp.size() == 1) ans = "YES";

		if (mp.size() == 2 && abs(vec[n - 1] - vec[0]) > 1) ans = "YES";

		cout << ans << endl;
	}
}