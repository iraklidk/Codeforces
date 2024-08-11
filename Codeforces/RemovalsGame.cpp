//IrakliDK
//https://codeforces.com/contest/2002/problem/B

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
	while (tc--) {

		int n; cin >> n;
		vi a(n);
		vi b(n);
		forr(i, n) {
			cin >> a[i];
		}
		forr(i, n) {
			cin >> b[i];
		}

		int sidxA = 0, eidxA = n - 1, sidxB = 0, eidxB = n - 1;
		bool alice = 0;
		while (sidxA < eidxA) {
			if (a[eidxA] != b[eidxB] && a[eidxA] != b[sidxB]) {
				alice = 1;
				break;
			}
			if (a[sidxA] != b[eidxB] && a[sidxA] != b[sidxB]) {
				alice = 1;
				break;
			}
			if (a[sidxA] == b[sidxB]) {
				sidxA++;
				sidxB++;
			}
			else if (a[sidxA] == b[eidxB]) {
				sidxA++;
				eidxB--;
			}
			else if (a[eidxA] == b[sidxB]) {
				eidxA--;
				sidxB++;
			}
			else if (a[eidxA] == b[sidxB]) {
				eidxA--;
				sidxB++;
			}
			else
			{
				alice = 1;
				break;
			}
		}

		cout << (alice == 1 ? "Alice" : "Bob") << endl;
	}
}