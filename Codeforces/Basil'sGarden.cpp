//IrakliDK
//https://codeforces.com/problemset/problem/1987/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		int ans = 0;
		vector<int> height(n);
		for (int i = 0; i < n; i++)
		{
			cin >> height[i];
			ans = max(ans, i + height[i]);
			
		}

		cout << ans << endl; 
	}
}