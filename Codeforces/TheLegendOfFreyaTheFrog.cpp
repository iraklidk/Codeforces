//IrakliDK
//https://codeforces.com/contest/2009/problem/C
 
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
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {
 
        ll x, y, k; cin >> x >> y >> k;
 
        ll n = (x + k - 1) / k; 
        ll m = (y + k - 1) / k; 
 
        ll mx = 2 * max(n, m);
 
        if(m < n) mx--;
 
        if(n == 0 && m == 0) mx = 0;
 
        cout << mx << endl;
    }
}