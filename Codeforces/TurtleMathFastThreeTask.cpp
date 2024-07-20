//IrakliDK
//https://codeforces.com/problemset/problem/1933/B

#include <bits/stdc++.h>
using namespace std;

int sumArr(vector<int>& arr) {
	int total = 0;
	for (int i : arr) {
		total += i;
	}
	return total;
}

bool check(vector<int>& arr) {
	int sum = sumArr(arr);
	for (int i = 0; i < arr.size(); i++) {
		if ((sum - arr[i]) % 3 == 0) return true;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		int sum = sumArr(vec);
		;
		if (sum % 3 == 0) cout << 0 << endl;
		else if (sum % 3 == 2) cout << 1 << endl;
		else if (sum % 3 == 1) {
			if (check(vec)) cout << 1 << endl;
			else cout << 2 << endl;
		}
	}
}