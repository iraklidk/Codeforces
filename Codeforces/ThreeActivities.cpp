//IrakliDK
//https://codeforces.com/contest/1914/problem/D

#include <bits/stdc++.h>
using namespace std;

int findMaxima(vector<int>& skiing, vector<int>& movie,
	vector<int>& games, vector<int>& si, vector<int>& mi, vector<int>& gi);

vector<int> sortIndexes(vector<int>& vec, vector<int>& indexes);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase; cin >> testcase;

	while (testcase--) {

		int n; cin >> n;
		vector<int> skiing(n), movie(n), games(n);
		for (int i = 0; i < n; i++) {
			cin >> skiing[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> movie[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> games[i];
		}

		vector<int> si(n), mi(n), gi(n);

		sortIndexes(skiing, si); sortIndexes(movie, mi); sortIndexes(games, gi);

		cout << findMaxima(skiing, movie, games, si, mi, gi) << endl;
	}
}

int findMaxima(vector<int>& skiing, vector<int>& movie, 
			   vector<int>& games, vector<int>& si, vector<int>& mi, vector<int>& gi) {
	int ans = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					if (si[i] != mi[j] && mi[j] != gi[k] && si[i] != gi[k])
						ans = max(ans, skiing[si[i]] + movie[mi[j]] + games[gi[k]]);
				}
			}
		}

	return ans;
}

vector<int> sortIndexes(vector<int>& vec, vector<int>& indexes) {
	vector<pair<int, int>> pointer;

	for (int i = 0; i < vec.size(); i++) {
		pair<int, int> pair1;
		pair1.first = vec[i];
		pair1.second = i;
		pointer.push_back(pair1);
	}

	sort(pointer.rbegin(), pointer.rend());

	for (int i = 0; i < vec.size(); i++) {
		indexes[i] = pointer[i].second;
	}

	return indexes;
}

/*
  10 20 30        1 10 1		30 20 10 1
  15 20 30	  10 1 1		30 5  15 20
  10 25 30	  1 1 10		30 25 10 10
				  			
  1 0 3		  0 1 2 3 
  0 1 2	          0 3 2 1
  2 1 3		  0 1 2 3 
*/ 		
