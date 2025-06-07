//https://codeforces.com/contest/2110/problem/A
using namespace std;
const int MOD = 1e9+7;
#include <bits/stdc++.h>
#define no cout << "NO" << "\n"
#define cans cout << ans << "\n"
#define yes cout << "YES" << "\n"
#define forr(i, n) for(int i=0;i<n;i++)
#define pv(vec) for(int i : vec) cout << i << " "
#define sortVec(vec) sort(vec.begin(), vec.end())
#define rsortVec(vec) sort(vec.rbegin(), vec.rend())
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
bool sortbysec(const pii& k, const
pii& b){return(k.second < b.second);}
const int diri[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
const int dirj[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
ll max(ll k, ll b) {if(k > b) return k; else return b;}
ll min(ll k, ll b) {if(k < b) return k; else return b;}
ll pwr(ll a, ll b) {ll r=1;while(b){if(b&1)(r*=a)%=MOD;(a*=a)%=MOD;b>>=1;}return r;}
#define MOD1 998244353

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> a(n);
        forr(i, n) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int mn = a[0], mx = a[n - 1];
        
        if(!((mn + mx) & 1)) {
            cout << 0 << endl;
            continue;
        }

        int aa = 0, b = 0;  
        forr(i, n) {
            if(a[i] % 2 == mn % 2) aa++;
            else break;
        }

        for(int i = n - 1; i >= 0; i--) {
            if(mx % 2 == a[i] % 2) b++;
            else break;
        }
        
        cout << min(aa, b) << endl;
    }
}