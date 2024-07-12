//IrakliDK
//https://codeforces.com/problemset/problem/1992/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		vector<int> vec(3);
		for (int i = 0; i < 3; i++) {
			cin >> vec[i];
		}
		int k = 5;
		sort(vec.begin(), vec.end());
		while (k > 0) {
			k--;
			if (vec[1] < vec[0]) vec[1]++;
			else if (vec[0] < vec[1]) {
				vec[0]++;
			}
			else if (vec[2] < vec[1]) vec[2]++;
			else vec[0]++;
		}

		cout << vec[0] * vec[1] * vec[2] << endl;

	}
}