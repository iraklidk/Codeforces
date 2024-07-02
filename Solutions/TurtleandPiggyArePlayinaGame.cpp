//IrakliDK
//https://codeforces.com/problemset/problem/1981/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcase;
    cin >> testcase;

    while (testcase--) {

        vector<int> vc(2);
        int l;
        cin >> l;
        vc[0] = l;

        int r;
        cin >> r;
        vc[1] == r;  // 2l <= r

        int x = 0;

        while (r > 1) {
            x++;
            r /= 2;
        }

        cout << x << endl;

    }

    return 0;
}