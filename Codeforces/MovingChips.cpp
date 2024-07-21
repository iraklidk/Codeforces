//IrakliDK
//https://codeforces.com/problemset/problem/1923/A

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

		int startIdx = 0, endIdx = 0;
		for (int i = 0; i < n; i++) {
			if (vec[i] == 1) {
				startIdx = i;
				break;
			}
		}

		for (int i = n - 1; i >= 0; i--) {
			if (vec[i] == 1) {
				endIdx = i;
				break;
			}
		}

		if (endIdx == startIdx || endIdx == 0) cout << 0 << endl;

		else {
			int countZero = 0;
			for (int i = startIdx; i < endIdx; i++) {
				if (vec[i] == 0) countZero++;
			}
			cout << countZero << endl;
		}

	}
}