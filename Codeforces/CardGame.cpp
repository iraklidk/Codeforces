//IrakliDK
//https://codeforces.com/contest/1999/problem/B

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

		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int ans = 0;

		if (a >= c && b > d) ans += 2;
		else if (a > c && b >= d) ans += 2;
		if (a >= d && b > c) ans += 2;
		else if (a > d && b >= c) ans += 2;


		cout << ans << endl;

	}
}