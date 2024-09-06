//IrakliDK
//https://codeforces.com/problemset/problem/1520/C
 
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
ll max(ll a, ll b) {if(a > b) return a; else return b;}
ll min(ll a, ll b) {if(a < b) return a; else return b;}
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
 
ll sum(ll l, ll r) {
    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {

        int n; cin >> n;

        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        else if(n == 2) {
            cout << -1 << endl;
            continue;
        }

        vvll vec(n, vll(n));

        ll first = 1;
        ll second = 2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(first <= n * n) {
                    vec[i][j] = first;
                    first+=2;
                }
                else {
                    vec[i][j] = second;
                    second += 2;
                }
            }
        }

        for(vll vc : vec) {
            for(int k : vc) {
                cout << k << " ";
            }
            cout << endl;
        }
    }
}

// 1 3 5 
// 7 8 9
// 2 4 6

// 1 3  5  7
// 9 11 13 15
// 2 4  6  8
// 10 12 14 16