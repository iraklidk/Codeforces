//IrakliDK
//https://codeforces.com/problemset/problem/1921/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		vector<pair<int, int>> points;
		for (int i = 0; i < 4; i++) {
			int x, y;
			cin >> x >> y;
			pair <int, int> pair1;
			pair1.first = x;
			pair1.second = y;
			points.push_back(pair1);
		}

		int a = (points[0].first - points[1].first);
		int b = (points[0].second - points[1].second);
		int c = (points[0].first - points[2].first);
		int d = (points[0].second - points[2].second);

		cout << min(a * a + b * b, c * c + d * d) << endl;
	}
}