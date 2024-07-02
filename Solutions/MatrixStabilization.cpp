//IrakliDK
//https://codeforces.com/problemset/problem/1986/B

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int n, m;
        cin >> n >> m;
        vector <vector <long long>> a(n + 2, vector <long long>(m + 2, -1));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1]) {
                    a[i][j] = max(max(a[i - 1][j], a[i][j + 1]), max(a[i + 1][j], a[i][j - 1]));
                }
                if (j == m) {
                    cout << a[i][j] << endl;
                    continue;
                }
                cout << a[i][j] << " ";
            }
        }
    }

}