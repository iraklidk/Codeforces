//IrakliDK
//https://codeforces.com/contest/1800/problem/A

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
		string a, b; cin >> a >> b;
		int ans = 0;
		forr(i, n - 2) {
			if ((a[i] == 'x' && b[i] == '.') && (a[i + 1] == '.' && b[i + 1] == '.') && (a[i + 2] == 'x' && b[i + 2] == '.')) {
				ans++;
			}
		}

		forr(i, n - 2) {
			if ((b[i] == 'x' && a[i] == '.') && (b[i + 1] == '.' && a[i + 1] == '.') && (b[i + 2] == 'x' && a[i + 2] == '.')) {
				ans++;
			}
		}

		cout << ans << endl;
	}
}

// ..x.x.x.x
// x.......x

// 