//IrakliDK
//https://codeforces.com/contest/1996/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		int n; cin >> n;
		
		if (n >= 4 && n % 4 == 3 || n % 4 == 2)
			cout << n / 4 + 1 << endl;

		else if (n >= 4 && n % 4 == 0 || n % 4 == 1)
			cout << n / 4 << endl;

		else 
			cout << 1 << endl;
	}
	return 0;
}