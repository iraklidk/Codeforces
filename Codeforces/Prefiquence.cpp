//IrakliDK
//https://codeforces.com/problemset/problem/1968/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;

		int ans = 0;
		queue<char> que;
		for (int i = 0; i < b.size(); i++) {
			que.push(b[i]);
		}

		for (int i = 0; i < a.size(); i++) {
			while (!que.empty()) {
				if (que.front() == a[i]) {
					ans++;
					que.pop();
					break;
				}
				else {
					que.pop();
				}
			}
		}

		cout << ans << endl;
	}
}