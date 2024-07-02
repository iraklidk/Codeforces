//IrakliDK
//https://codeforces.com/problemset/problem/1968/A

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
        int x;
        cin >> x;

        int mx = INT_MIN;;

        int k = 0;

        for (int y = 1; y < x; y++) {
            if (gcd(x, y) + y > mx) {
                mx = gcd(x, y) + y;
                k = y;
            }
        }

        cout << k << endl;
    }

    
}