//IrakliDK
//https://codeforces.com/problemset/problem/1669/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {

        int n, q;
        cin >> n >> q;

        long long sum = 0;
        int countEven = 0;
        int countOdd = 0;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            arr[i] = k;

            if (k % 2 == 0)
                countEven++;

            sum += k;
        }

        countOdd = n - countEven;

        while (q--) {
            int type, x;
            cin >> type >> x;

            if (type == 0 && x % 2 == 0) {
                sum += x * countEven;
            }

            if (type == 0 && x % 2 == 1) {
                sum += x * countEven;
                countOdd += countEven;
                countEven = 0;
            }

            if (type == 1 && x % 2 == 0) {
                sum += x * countOdd;
            }

            if (type == 1 && x % 2 == 1) {
                sum += x * countOdd;
                countEven += countOdd;
                countOdd = 0;
            }

            cout << sum << endl;
        }
    }
}