//IrakliDK
//https://codeforces.com/contest/1998/problem/A

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
typedef vector<pair<int, int>> vpii;
typedef vector<pair<ll, ll>> vpll;


int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int x, y, k; cin >> x >> y >> k;

		ll xSum = x * k, ySum = y * k, z = k + 1, xtmp = 1, sumx = 0;
		pair<ll, ll> p{0, ySum / k};
		vpll points(k, p);

		while (z--) {
			if (z == 1) {
				ll temp = xtmp;
				xtmp = xSum - sumx;
				if (xtmp < temp && xtmp > 0) {
					points[k - 2].first *= -1;
					points[k - 1].first = 2 * (temp - 1) + xtmp;
				}
				else points[k - 1].first = xtmp;
				break;
			}
			points[xtmp - 1].first = xtmp;
			sumx += xtmp;
			xtmp++;
		}

		for (pair<int, int> p : points) {
			cout << p.first << " " << p.second << endl;
		}

	}
}