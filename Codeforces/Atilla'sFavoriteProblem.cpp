//IrakliDK
//https://codeforces.com/contest/1760/problem/B

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

		int n; string s; cin >> n; cin >> s;

		int maxima = 0;

		forr(i, n) {
			maxima = max(s[i] - 'a', maxima);
		}

		cout << maxima + 1 << endl;

	}
}