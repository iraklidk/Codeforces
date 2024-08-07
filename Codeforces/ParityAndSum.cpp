//IrakliDK
//https://codeforces.com/contest/1993/problem/B

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

		int n; cin >> n;
		vll vec(n);
		forr(i, n) {
			cin >> vec[i];
		}
		ll mxOdd = INT_MIN, mxEven = INT_MIN, countEven = 0, ans = 0;
		sortVec(vec);
		forr(i, n) {
			if (vec[i] % 2 == 0) {
				mxEven = max(mxEven, vec[i]);
				countEven++;
			}
			if (vec[i] % 2 == 1) {
				mxOdd = max(mxOdd, vec[i]);
			}
		}
		ll sum = mxOdd;
		ans = countEven;
		forr(i, n) {
			if (vec[i] % 2 == 0 && sum > vec[i]) {
				sum += vec[i];
			}
			else if (vec[i] % 2 == 0 && sum < vec[i]) {
				ans++;
				break;
			}
		}

		cout << (countEven == n ? 0 : ans) << endl;
	}
}