//IrakliDK
//https://codeforces.com/problemset/problem/1986/A

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

        int x1;
        cin >> x1;

        int x2;
        cin >> x2;

        int x3;
        cin >> x3;


        int minim = INT_MAX;
        int sum = 0;
        for (int i = 0; i <= 10; i++) {
            sum = abs(i - x1) + abs(i - x2) + abs(i - x3);
            if (sum < minim)
                minim = sum;
        }

        cout << minim << endl;
    }

    return 0;
}