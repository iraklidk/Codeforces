//IrakliDK
//https://codeforces.com/problemset/problem/1985/C

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
        cin >> n;

        vector<int> vec(n);

        int count = 0;
        int sum = 0;
        int maximum = 0;

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        for (int i = 0; i < n; i++) {
            if (sum < 0) break;
            sum += vec[i];
            maximum = max(maximum, vec[i]);

            if (maximum == sum - maximum) count++;
        }

        cout << count << endl;
    }

    return 0;
}