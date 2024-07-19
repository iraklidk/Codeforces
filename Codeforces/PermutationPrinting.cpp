//IrakliDK
//https://codeforces.com/problemset/problem/1930/B

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
		int first = 1;
		int last = n;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				vec[i] = first;
				first++;
			}
			else {
				vec[i] = last;
				last--;
			}
		}

		for (int i : vec) {
			cout << i << " ";
		}
		cout << endl;
	}
}

// 12 10 8 1 6 4 

// 1 2 3 4 5 6 7 

// 6 4 2 1 3 5 7 

// 1 2 4 6 8 3 5 7 9

// 1 2 4 6 8 10 3 5 7 8 9

// 12 10 8 6 4 2 1 3 5 7 9 11 

// 1 13 2 4 6 8 10 12 3 5 7 9 11

// 1 14 2 4 6 8 10 12 3 5 7 9 11 13

// 1 15 2 13 3 12 4 11 5 10 6 9 7 8 14

// 1 24 2 4 6 8 10 12 14 16 18 20 22 3 5 7 9 11 13 15 17 19 21 23