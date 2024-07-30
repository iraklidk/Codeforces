//IrakliDK
//https://codeforces.com/contest/1997/problem/A

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

		string s; cin >> s;
		bool changed = 0;
		forr(i, s.size() - 1) {
			if (s[i] == s[i + 1]) {
				string k = s.substr(0, i + 1);
				string u = s.substr(i + 1);
				changed = 1;
				char ch;
				if (s[i] != 'z') ch = 'z';
				else ch = 'a';
				k += ch;
				k += u;
				s = k;
				break;
			}
		}

		if (!changed) {
			char c = s[s.size() - 1];
			if (c == 'c') s += 'a';
			else s += 'c';
		}

		cout << s << endl;
	}
}