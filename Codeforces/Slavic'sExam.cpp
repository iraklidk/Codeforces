//IrakliDK
//https://codeforces.com/contest/1999/problem/D

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

		string s, t; cin >> s >> t;
		int sIdx = 0;

		forr(i, s.size()) {
			if (s[i] == t[sIdx] && sIdx < t.size()) {
				sIdx++;
			}
			if (s[i] == '?' && sIdx < t.size()) {
				s[i] = t[sIdx];
				sIdx++;
			}
			else if (s[i] == '?' && sIdx >= t.size()) s[i] = 'a';
		}

		if (sIdx == t.size()) {
			yes;
			cout << s << endl;
		}

		else
			no;

	}
}