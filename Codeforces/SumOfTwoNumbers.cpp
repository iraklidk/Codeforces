//IrakliDK
//https://codeforces.com/problemset/problem/1987/B

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
	int ans = 0;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}

	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {

		int n;
		cin >> n;
		int x = n / 2 + 1, y = n / 2;
		int countZero = 0;
		int k = n / 2 + 1;

		if (n % 10 == 9 && (n/10) % 2 == 1) {
			while (k % 10 == 0) {
				k /= 10;
				countZero++;
			}
			int four = 4;
			int count = 0;
			while (countZero--) {
				x += four * pow(10, countZero);
				if (count % 2 == 0) {
					four = 5;
				}
				else four = 4;
				count++;
			}

			y -= x - (n / 2 + 1);
		}

		else {
			if (n % 2 == 0) {
				x = n / 2;
				y = x;
			}
			else {
				x = n / 2 + 1;
				y = n / 2;
			}
		}

		cout << x << " " << y << endl;
	}
}