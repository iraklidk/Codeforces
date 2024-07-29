//IrakliDK
//https://codeforces.com/problemset/problem/1955/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc; cin >> tc;
    while (tc--) {

        int n, a, b; cin >> n >> a >> b;

        cout << (2 * a <= b ? a * n : (n % 2) * a + (n / 2) * b) << endl;
        
    }
}