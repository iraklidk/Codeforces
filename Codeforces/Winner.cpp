//IrakliDK
//https://codeforces.com/contest/2/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<pair<string, int>> rounds;
	map<string, int> points;
	map<string, int> map2;
	int maxima = INT_MIN;
	string wnnr = "";

	for (int i = 0; i < n; i++) {
		pair<string, int> pair1;
		string name;
		cin >> name;
		int a;
		cin >> a;
		points[name] += a;
		pair1.first = name;
		pair1.second = a;
		rounds.push_back(pair1);
	}

	set<string> winners;

	for (auto i : points) {
		if (i.second > maxima) {
			maxima = i.second;
		}
	}

	for (auto i : points) {
		if (i.second == maxima) winners.insert(i.first);
	}

	for (auto i : rounds) {
		map2[i.first] += i.second;
		if (winners.count(i.first) && map2[i.first] >= maxima) {
			wnnr = i.first;
			break;
		}
	}

	cout << wnnr << endl;
}