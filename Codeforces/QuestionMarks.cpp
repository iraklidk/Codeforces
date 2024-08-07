//IrakliDK
//https://codeforces.com/contest/1993/problem/A

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
		string s; cin >> s;
		int ans = 0;
		int countA = n;
		int countB = n;
		int countC = n;
		int countD = n;
		forr(i, s.size()) {
			if (s[i] == 'A' && countA > 0) {
				ans++;
				countA--;
			}
			if (s[i] == 'B' && countB > 0) {
				ans++;
				countB--;
			}
			if (s[i] == 'C' && countC > 0) {
				ans++;
				countC--;
			}
			if (s[i] == 'D' && countD > 0) {
				ans++;
				countD--;
			}
		}

		cout << ans << endl;
	}
}