//IrakliDK
//https://codeforces.com/contest/1999/problem/C

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

		int n, s, m; cin >> n >> s >> m;
		vpii times;
		string ans = "NO";

		forr(i, n) {
			pair<int, int> pair1;
			int a, b; cin >> a >> b;
			pair1.first = a;
			pair1.second = b;
			times.push_back(pair1);
		}

		for (int i = 1; i < n; i++) {
			if (times[i].first - times[i - 1].second >= s) {
				ans = "YES";
				break;
			}
		}

		if (m - times[n - 1].second >= s) ans = "YES";
		if (times[0].first >= s) ans = "YES";

		cout << ans << endl;
	}
}