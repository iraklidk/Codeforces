//IrakliDK
//https://codeforces.com/contest/1990/problem/B

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

		int n, x, y; cin >> n >> x >> y;

		vi a(n, 1);
		int k = -1;
		x--;
		y--;
		for (int i = x + 1, j = y - 1; i < n || j >= 0; i++, j--) {

			if (i < n) {
				a[i] = k;
			}

			if (j >= 0) {
				a[j] = k;
			}

			k *= -1;
		}

		for (int i : a) {
			cout << i << " ";
		}
		cout << endl;

	}
}