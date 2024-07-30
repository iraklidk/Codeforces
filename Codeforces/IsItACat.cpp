//IrakliDK
//https://codeforces.com/contest/1800/problem/A

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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<ll>> vll;
typedef vector<vector<int>> vvi;

int main()
{

	int tc; cin >> tc;
	while (tc--) {

		int k; cin >> k;
		string s; cin >> s;

		bool n = 0;
		s[0] = tolower(s[0]);
		forr(i, k - 1) {
			s[i + 1] = tolower(s[i + 1]);
			if (s[i] == 'm' && (s[i + 1] != 'm' && s[i + 1] != 'e')) {
				no;
				n = 1;
				break;
			}
			if (s[i] == 'e' && (s[i + 1] != 'e' && s[i + 1] != 'o')) {
				no;
				n = 1;
				break;
			}
			if (s[i] == 'o' && (s[i + 1] != 'w' && s[i + 1] != 'o')) {
				no;
				n = 1;
				break;
			}
			if (s[i] == 'w' && s[i + 1] != 'w') {
				no;
				n = 1;
				break;
			}
		}
		if (n == 0 && (s[0] != 'm' || s.size() < 4 || s[s.size() - 1] != 'w')) {
			n = 1;
			no;
		}

		if (!n) yes;
	}
}