//IrakliDK
//https://codeforces.com/contest/1926/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	int tc; cin >> tc;
	while (tc--) {

		string s; cin >> s;
		int countA = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'A')
				countA++;
			else countA--;
		}

		cout << (countA > 0 ? "A" : "B") << endl;
	}
}