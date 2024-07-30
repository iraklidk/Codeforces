//IrakliDK
//https://codeforces.com/contest/1954/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

bool canBob(int n, int m, int k) {
	return n - (n / m + (n % m != 0)) <= k;
}

int main()
{

	int tc; cin >> tc;
	while (tc--) {

		int n, m, k; cin >> n >> m >> k;
		if (canBob(n, m, k))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
}