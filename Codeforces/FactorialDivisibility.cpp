//IrakliDK
//https://codeforces.com/contest/1753/problem/B

#include <bits/stdc++.h>
using namespace std;

bool isDivisible(int n, int x, vector<int>& vec) {
	vector<int> arr(500005);
	for (int i = 1; i <= n; i++) {
		arr[vec[i]]++;
	}
	for (int i = 1; i < x; i++) {
		if (arr[i] % (i + 1) != 0) return false;
		arr[i + 1] += arr[i] / (i + 1);
	}

	return true;
}

int main()
{
		int n, x; cin >> n >> x;
		vector<int> vec(500005);
		for (int i = 1; i <= n; i++) {
			cin >> vec[i];
		}

		bool ans = isDivisible(n, x, vec);
		
		cout << (ans ? "YES" : "NO") << endl;
}