//https://codeforces.com/contest/2110/problem/B
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

ll some(ll a, ll b) {
    int ans = 0;

    while(true) {
        if(a > 1) {
            ans++;
            a -= a / 2;
        }
        if(b > 1) {
            ans++;
            b -= b / 2;
        }
        if(a <= 1 && b <= 1) break;
    }
    
    return ans + 1;
}

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n, m, a, b; cin >> n >> m >> a >> b;

        int n1 = min(a, n - a  + 1), m1 = min(b, m - b + 1);

        cout << min(some(n, m1), some(n1, m)) << endl;
    }
}