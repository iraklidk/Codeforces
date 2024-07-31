//IrakliDK
//https://codeforces.com/problemset/problem/1930/A

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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<ll>> vll;
typedef vector<vector<int>> vvi;

int main()
{

	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vi vec(2 * n);
		forr(i, 2 * n) {
			cin >> vec[i];
		}

		sortVec(vec);
		int ans = 0;
		for (int i = 0; i < 2 * n; i += 2) {
			ans += vec[i];
		}
		
		cout << ans << endl;
	}
}