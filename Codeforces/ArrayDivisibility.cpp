//IrakliDK
//https://codeforces.com/contest/1983/problem/A

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

		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
		}

		for (int i : arr) {
			cout << i << " ";
		}
		cout << endl;
	}
}