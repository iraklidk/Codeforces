//IrakliDK
//https://codeforces.com/problemset/problem/1991/B  
 
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
bool sortbysec(const pair<int, int>& a, const 
pair<int, int>& b){return(a.second < b.second);}
ll max(ll a, ll b) {if(a > b) return a; else return b;}
ll min(ll a, ll b) {if(a < b) return a; else return b;}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {

        int n; cin >> n;
        vll vec(n - 1);
        forr(i, n - 1) {
            cin >> vec[i];
        }

        vll ans(n, -1);
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                ans[i] = 0 | vec[i];
                continue;
            }
            if(i == n - 1) {
                ans[i] = vec[i - 1] | 0;
                continue;
            }
            ans[i] = vec[i - 1] | vec[i];
        }

        bool k = 1;

        for(int i = 0; i < n - 1; i++) {
            if((ans[i] & ans[i + 1]) != vec[i]) {
                k = 0;
                cout << -1 << endl;
                break;
            }
        }
        ans[0] = vec[0];

        if(k) {
            for(int i : ans) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

// 0011 0101 0100 0010
//   a    b   c    d    e
// 0011 0111 0101 0110 0010


// 0001 0010 0011
// 0001 0011 0011 0011