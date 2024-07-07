//IrakliDK
//https://codeforces.com/problemset/problem/1975/B

#include <bits/stdc++.h>
using namespace std;

bool checkBeautiful(vector<int>& vec) {
	sort(vec.begin(), vec.end());

	int a = vec[0];
	int b = vec[1];
	int idx = 0;
	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] != a && vec[i] % a != 0) {
			b = vec[i];
			idx = i;
			break;
		}
	}

	for (int i = idx + 1; i < vec.size(); i++) {
		if (vec[i] % a != 0 && vec[i] % b != 0)
			return false;
	}

	return true;
}

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

		bool isBeautiful = checkBeautiful(vec);
		if (isBeautiful) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}