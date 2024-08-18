//IrakliDK
//https://codeforces.com/problemset/problem/1795/B

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
		int n, k; cin >> n >> k;

		vpii vec;
		forr(i, n) {
			int a, b;
			cin >> a >> b;
			if (a > k || b < k) continue;
			vec.push_back({ a, b });
		}

		string ans = "NO";
		bool l = 0, r = 0;

		forr(i, vec.size()) {
			if (vec[i].first == k) l = 1;
			if (vec[i].second == k) r = 1;
			if (l && r) break;
		}

		cout << (l && r == 1 ? "YES" : "NO") << endl;
	}
}