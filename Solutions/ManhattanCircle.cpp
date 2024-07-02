//IrakliDK
//https://codeforces.com/problemset/problem/1985/D

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {

        int n, m;
        cin >> n >> m;

        vector<string> vec;
        int minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;

        for (int i = 0; i < n;i++) {
            string s;
            cin >> s;
            vec.push_back(s);
        }

        stack<int> coordsX;
        stack<int> coordsY;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vec[i][j] == '#') {

                    coordsX.push(j);
                    coordsY.push(i);

                }
            }
        }

        while (!coordsX.empty()) {
            int tmp = coordsX.top();
            coordsX.pop();
            if (maxX < tmp) maxX = tmp;
            if (minX > tmp) minX = tmp;
        }

        while (!coordsY.empty()) {
            int tmp = coordsY.top();
            coordsY.pop();
            if (maxY < tmp) maxY = tmp;
            if (minY > tmp) minY = tmp;
        }

        cout << (minY + 1 + maxY + 1) / 2 << " " << (minX + 1 + maxX + 1) / 2 << endl;
    }
}