//IrakliDK
//https://codeforces.com/problemset/problem/1989/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;


int sum(vector<int>& arr) {
    int sum = 0;
    for (int i : arr) {
        sum += i;
    }
    return sum;
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

        int firstRate = 0;
        int secondRate = 0;
        int countPositive = 0;
        int countNegative = 0;

        vector<int> fm(n);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            fm[i] = k;
        }
        vector<int> sm(n);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            sm[i] = k;                                                  // 1 1 1 -1
        }                                                               // 0 1 -1 1

        for (int i = 0; i < n; i++) {

            if (fm[i] > sm[i]) firstRate += fm[i];
            else if (sm[i] > fm[i]) secondRate += sm[i];
            else if (fm[i] == 1) countPositive++;
            else if (fm[i] == -1) countNegative++;

        }

        while (countPositive--) {
            if (secondRate > firstRate) firstRate++;
            else secondRate++;
        }

        while (countNegative--) {
            if (secondRate < firstRate) firstRate--;
            else secondRate--;
        }

        cout << min(firstRate, secondRate) << endl;
    }
}