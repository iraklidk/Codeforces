//IrakliDK
//https://codeforces.com/problemset/problem/1982/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testcase;
	cin >> testcase;


	while (testcase--) {

		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		if (x1 == x2 && y1 == y2)
			cout << "YES" << endl;

		else if (x1 > y1 && x2 > y2)
			cout << "YES" << endl;

		else if (x1 < y1 && x2 < y2)
			cout << "YES" << endl;

		else cout << "NO" << endl;

	}
}