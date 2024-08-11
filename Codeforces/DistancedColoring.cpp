//IrakliDK
//https://codeforces.com/contest/2002/problem/A

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

		int n, m, k; cin >> n >> m >> k;

		int w = (m - k > 0 ? (m - k) : 0);
		int h = (n - k > 0 ? (n - k) : 0);
		int countColor = (h * m + w * n);

		if (h > 0 && w > 0) {
			countColor -= h * w;
		}

		countColor = m * n - countColor;

		cout << countColor << endl;
	}
}