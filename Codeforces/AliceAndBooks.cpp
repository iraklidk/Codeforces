//IrakliDK
//https://codeforces.com/problemset/problem/1978/A

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
		vector<int> pages(n);
		for (int i = 0; i < n; i++) {
			cin >> pages[i];
		}
		int maxima = INT_MIN;
		for (int i = 0; i < n - 1; i++) {
			if (maxima < pages[i]) maxima = pages[i];
		}

		cout << maxima + pages[pages.size() - 1] << endl;

	}
}