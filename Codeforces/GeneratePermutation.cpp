//IrakliDK
//https://codeforces.com/contest/2001/problem/B
 
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
#define no cout << "NO" << "\n"
#define yes cout << "YES" << "\n"
#define forr(i, n) for(int i=0;i<n;i++)
#define sortVec(vec) sort(vec.begin(), vec.end())
#define rsortVec(vec) sort(vec.rbegin(), vec.rend())
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpii;
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
 
int main()
{
    int tc; cin >> tc;
    while(tc--) {

        int n; cin >> n;
        vi vec(n, -1);
        vi vec2(n, -1);

        int left = 0;
        int right = n - 1;
        int current = 1;

        while (left <= right) {
            if (current % 2 == 1) {
                vec[left] = current;
                left++;
            } else {
                vec[right] = current;
                right--;
            }
            current++;
    }

        if(n & 1) {
            for(int i : vec) {
                cout << i << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}