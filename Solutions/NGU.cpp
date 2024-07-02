
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//IrakliDK

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n;
        cin >> n;
        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        if (vc[0] != vc[n - 1]) {
            string res;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                res += 'B';
                if (i == 1) res[i] = 'R';
            }
            cout << res << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}