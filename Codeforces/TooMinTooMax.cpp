//IrakliDK
//https://codeforces.com/problemset/problem/1934/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		sort(vec.begin(), vec.end());

		cout << abs(vec[vec.size() - 1] - vec[0]) + abs(vec[vec.size() - 1] - vec[1]) + abs(vec[vec.size() - 2] - vec[0]) + abs(vec[vec.size() - 2] - vec[1]) << endl;
	}
}