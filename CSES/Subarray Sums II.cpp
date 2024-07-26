//IrakliDK
//https://codeforces.com/contest/1996/problem/A
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x; cin >> n >> x;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	vector<ll> pref(n + 1);

	for (int i = 1; i <= n; i++) {
		pref[i] = pref[i - 1] + vec[i - 1];
	}

	map<ll, ll> mp;

	ll ans = 0;
	mp[0]++;
	for (int i = 1; i <= n; i++) {
		ans += (mp[-x + pref[i]]); 
		mp[pref[i]]++;
	}

	cout << ans << endl;

	return 0;
}