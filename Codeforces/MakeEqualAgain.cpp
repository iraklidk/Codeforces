//IrakliDK
//https://codeforces.com/problemset/problem/1931/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		int startIdx = 0, endIdx = n - 1;
		while (startIdx < endIdx && vec[startIdx] == vec[endIdx]) {
			startIdx++;
			endIdx--;
		}

		int start = 0;
		int end = n - 1;
		int a = 1, b = 1;
		while (end > 0 && vec[end] == vec[end - 1]) {
			b++;
			end--;
		}
		while (start < n - 1 && vec[start] == vec[start + 1]) {
			a++;
			start++;
		}
		if (vec[n - 1] == vec[0]) {
			int c = n - a - b;
			if (c <= 0)
				cout << 0 << endl;
			else
				cout << c << endl;
		}
		else {
			int maxima = max(a, b);
			cout << n - maxima << endl;
		}

	}

	return 0;
}