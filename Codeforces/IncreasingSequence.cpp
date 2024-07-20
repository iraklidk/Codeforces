//IrakliDK
//https://codeforces.com/contest/1882/problem/A

#include <bits/stdc++.h>
using namespace std;

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
		
		vector<int> newVec(n);
		for (int i = 0; i < n; i++) {
			newVec[i] = i + 1;
		}
		if (vec[0] != 1) newVec[0] = 1;
		else newVec[0] = 2;
		for (int i = 1; i < n; i++) {
			if (newVec[i - 1] + 1 != vec[i]) newVec[i] = newVec[i - 1] + 1;
			else newVec[i] = newVec[i-1] + 2;
		}
		cout << newVec[newVec.size() - 1] << endl;
	}
}