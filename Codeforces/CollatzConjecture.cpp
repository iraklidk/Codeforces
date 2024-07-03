//IrakliDK
// https://codeforces.com/problemset/problem/1982/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a; // 19
        a = b;    // 17 1
        b = tmp % b; // 0
    }

    return a;
}



int main()
{

    int testcase;
    cin >> testcase;

    while (testcase--) {

        int x, y, k;
        cin >> x >> y >> k;

        while (k >= (y - x % y)) {

            k -= (y - x % y);
            x += (y - x % y);

            while (x % y == 0) {
                x /= y;
            }

            if (x == 1) {
                k = k % (y - x % y);
                x += k;
                k -= k;
            }
        }

        x += k;

        cout << x << endl;

    }
}