//IrakliDK
//https://codeforces.com/problemset/problem/1915/C

#include <bits/stdc++.h>
using namespace std;

bool perfectSquare(long long n) {
	long long a = sqrt(n);

	return a * a == n;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		vector<long long> vec(n);
		for (long long i = 0; i < n; i++) {
			cin >> vec[i];
		}

		long long sum = 0;
		for (long long i : vec) {
			sum += i;
		}

		cout << (perfectSquare(sum) ? "YES" : "NO") << endl;
	}
}