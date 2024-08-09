//IrakliDK
//https://codeforces.com/contest/1760/problem/D

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
typedef vector<pair<int, int>> vpii;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vi tmp(n), vec;
		forr(i, n) {
			cin >> tmp[i];
		}

		vec.push_back(tmp[0]);
		for (int i = 1; i < n; i++) {
			if (tmp[i] == vec[vec.size() - 1]) continue;
			else vec.push_back(tmp[i]);
		}

		string ans = "NO";
		int count = 0;

		if (vec.size() == 1) {
			cout << "YES" << endl;
			continue;
		}

		if (vec[0] < vec[1]) count++;

		if (vec[vec.size() - 1] < vec[vec.size() - 2]) count++;

		for (int i = 1; i < vec.size() - 1; i++) {
			if (vec[i - 1] > vec[i] && vec[i] < vec[i + 1]) count++;
			if (count > 1) break;
		}

		if (count == 1) ans = "YES";

		cout << ans << endl;

	}
}