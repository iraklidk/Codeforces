//IrakliDK
//https://cses.fi/problemset/task/1084/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> desiredSize(n);
	vector<int> sizes(m);
	for (int i = 0; i < n; i++) {
		cin >> desiredSize[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> sizes[i];
	}

	sort(sizes.begin(), sizes.end());
	sort(desiredSize.begin(), desiredSize.end());

	int count = 0;
	int a = 0;          // 45 60 60 80
	int b = 0;			// 30 60 75

	while (a <= sizes.size() - 1 && b <= desiredSize.size() - 1) {
		if (a <= sizes.size() - 1 && desiredSize[b] > sizes[a] && abs(desiredSize[b] - sizes[a]) > k) {
			a++;
		}
		else if (b <= desiredSize.size() - 1 && desiredSize[b] < sizes[a] && abs(desiredSize[b] - sizes[a]) > k) {
			b++;
		}
		else if (abs(desiredSize[b] - sizes[a]) <= k) {
			b++;
			a++;
			count++;
		}
	}
	cout << count << endl;
}