//IrakliDK
//https://codeforces.com/contest/2000/problem/A

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

	forr(i, tc) {
		int a; cin >> a;

		string s = to_string(a);

		if (s[0] != '1' || s[1] != '0' || s.size() <= 2) cout << "NO" << endl;
		else if (s.size() >= 3 && s[2] - '0' < 1) cout << "NO" << endl;
		else if (s.size() == 3 && (s[2] - '0' == 1 || s[2] - '0' == 0)) cout << "NO" << endl;
		else
			yes;

	}
}