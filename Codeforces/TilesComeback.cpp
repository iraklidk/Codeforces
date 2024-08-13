//IrakliDK
//https://codeforces.com/problemset/problem/1851/C

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

		int n, k; cin >> n >> k;
		vi vec(n);
		forr(i, n) {
			cin >> vec[i];
		}

		int countF = 0;
		int countL = 0;

		forr(i, n) {
			if (countF >= k && vec[i] == vec[n - 1]) {
				countL++;
			}
			if (vec[i] == vec[0]) {
				countF++;
			}
			if (countL == k) break;
		}

		if (vec[0] == vec[n - 1])
			countL = countF;

		cout << ((countL >= k && countF >= k) ? "YES" : "NO") << endl;
	}
}