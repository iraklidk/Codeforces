//IrakliDK
//https://codeforces.com/problemset/problem/1878/A

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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<ll>> vvll;
typedef vector<vector<int>> vvi;

int main() 
{
	int tc; cin >> tc;
	while (tc--) {

		int n, k; cin >> n >> k;
		vi vec(n);
		bool c = 0;
		forr(i, n) {
			cin >> vec[i];
			if (vec[i] == k && !c) {
				yes;
				c = 1;
			}
		}
		if (!c) no;
	}
}