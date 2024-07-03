//IrakliDK
//https://cses.fi/problemset/task/1629/

#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<vector<int> > times(n, vector<int>(2));
	for (int i = 0; i < n; i++) {
		cin >> times[i][0] >> times[i][1];
	}

	sort(times.begin(), times.end());

	stack<vector<int>> watched;
	watched.push(times[0]);
	for (int i = 0; i < n; i++)
	{
		if (times[i][0] > watched.top()[0] && times[i][1] < watched.top()[1]) {
			watched.pop();
			watched.push(times[i]);
		}
		else if (times[i][0] > watched.top()[0] && times[i][0] >= watched.top()[1]) {
			watched.push(times[i]);
		}
	}

	cout << watched.size() << endl;
