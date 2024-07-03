//IrakliDK
//https://codeforces.com/problemset/problem/1980/A

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

		int n;
		int m;
		string a;
		cin >> n >> m >> a;

		int res = 0;

		int countA = 0;
		int countB = 0;
		int countC = 0;
		int countD = 0;
		int countE = 0;
		int countF = 0;
		int countG = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] == 'A')
				countA++; // 0
			if (a[i] == 'B')
				countB++; // 2
			if (a[i] == 'C')
				countC++; // 2 
			if (a[i] == 'D')
				countD++; // 3 
			if (a[i] == 'E')
				countE++; // 2 
			if (a[i] == 'F')
				countF++; // 0
			if (a[i] == 'G')
				countG++; // 1
		}

		if (m - countA > 0)
			res += m - countA;
		if (m - countB > 0)
			res += m - countB;
		if (m - countC > 0)
			res += m - countC;
		if (m - countD > 0)
			res += m - countD;
		if (m - countE > 0)
			res += m - countE;
		if (m - countF > 0)
			res += m - countF;
		if (m - countG > 0)
			res += m - countG;


		cout << res << endl;
	}
}