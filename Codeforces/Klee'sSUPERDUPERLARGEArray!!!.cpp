//IrakliDK
//https://codeforces.com/contest/2009/problem/E
 
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

        ll n, k; cin >> n >> k;

        ll l = k, r = n + k - 1;

        while(l < r) {
            ll mid = l + (r - l) / 2;
            if(sum(k, mid) < sum(mid, k + n - 1)) l = mid + 1;
            else
                r = mid;
        }        
        ll ans = min(abs(sum(k, l - 1) - sum(l, k + n - 1)), abs(sum(k, l) - sum(l + 1, k + n - 1)));

        cout << ans << endl;
    }
}