//IrakliDK
//https://codeforces.com/problemset/problem/1918/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		map<int, int> map;
		for (int i = 0; i < a.size(); i++) {
			map[a[i]] = b[i];
		}

		sort(a.begin(), a.end());
		for (int i = 0; i < b.size(); i++) {
			b[i] = map[a[i]];
		}
			
		for (int i : a) {
			cout << i << " ";
		}
		cout << endl;
		for (int i : b) {
			cout << i << " ";
		}
		cout << endl;
	}
}