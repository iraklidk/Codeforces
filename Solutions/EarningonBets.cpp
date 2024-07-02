//IrakliDK
// https://codeforces.com/problemset/problem/1979/C

#include <bits/stdc++.h>
using namespace std;


long long gcd(long a, long b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

long long gcdNums(vector<long long> arr) {
    int tmp = 1;
    for (int i = 0; i < arr.size(); i++) {
        tmp = gcd(tmp, arr[i]);
    }

    return tmp;
}

long long lcm(long a, long b) {
    return (a * b) / (gcd(a, b));
}

long long lcmNums(vector<long long> arr) {
    int tmp = 1;
    for (int i = 0; i < arr.size(); i++) {
        tmp = lcm(tmp, arr[i]);
    }

    return tmp;
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

        vector<long long> res(n);
        vector<long long> bets(n);
        for (int i = 0; i < n; i++) {
            cin >> bets[i];
        }
        long long lcm = lcmNums(bets);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            res[i] = lcm / bets[i];
            total += res[i];
        }

        if (total >= lcm) {
            cout << -1 << endl;
        }
        else {
            for (long long i : res) {
                cout << i << " ";
            }
            cout << endl;
        }

    }
}