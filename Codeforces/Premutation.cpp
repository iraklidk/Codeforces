//IrakliDK
//https://codeforces.com/problemset/problem/1790/C

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
typedef pair<int, int> pii;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<bool>> vvb;
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<string>> vvs;
typedef vector<pair<int, int>> vpii;
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
const vi diri = { 1, -1, 0, 0 };
const vi dirj = { 0, 0, 1, -1 };

int main()
{
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		vvi vec(n, vi(n - 1));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				cin >> vec[i][j];
			}
		}

		vi ans;
		int correct = 0, incorrectLine = 0;

		if (vec[n / 2][0] == vec[n / 2 + 1][0]) {
			correct = vec[n / 2][0];
		}
		else if (vec[n / 2][0] == vec[n / 2 - 1][0])
			correct = vec[n / 2][0];
		else correct = vec[0][0];

		for (int i = 0; i < n; i++) {
			if (vec[i][0] != correct)
				incorrectLine = i;
		}

		ans.push_back(correct);
		for (int i = 0; i < n - 1; i++) {
			ans.push_back(vec[incorrectLine][i]);
		}

		for (int i : ans) {
			cout << i << " ";
		}
		cout << endl;
	}
}