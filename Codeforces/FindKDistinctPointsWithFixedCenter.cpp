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
		vpll points(k);

		ll xSum = x * k, ySum = y * k, tmp = k, sumy = 0,
			xtmp = 1, ytmp = -1, v = 0, u = 0, sumx = 0;

		while (tmp > 0) {
			if (tmp == 1) {
				ll temp = xtmp;
				xtmp = xSum - sumx;
				if (xtmp < temp && xtmp > 0) {
					points[points.size() - 2].first *= -1;
					points[points.size() - 1].first = 2 * (temp - 1) + xtmp;
				}
				else points[points.size() - 1].first = xtmp;
				ytmp = ySum - sumy;
				points[points.size() - 1].second = ytmp;
				break;
			}
			points[v].first = xtmp;
			points[v].second = ytmp;
			sumx += xtmp;
			sumy += ytmp;
			xtmp++;
			ytmp--;
			v++;
			tmp--;
		}

		for (pair<int, int> p : points) {
			cout << p.first << " " << p.second << endl;
		}

	}
}