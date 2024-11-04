//IrakliDK
//https://codeforces.com/contest/2036/problem/B
 
const int mod = 1e9+7;
using namespace std;
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
ll pwr(ll a, ll b) {ll r=1;while(b){if(b&1)(r*=a)%=mod;(a*=a)%=mod;b>>=1;}return r;}



int main()
{
    int tc; cin >> tc;
    while(tc--) {
        
        int n, k; cin >> n >> k;
        map<ll, ll> mp;

        forr(i, k) {
           int b, c; cin >> b >> c;
           mp[b] += c;
        }

        vll money;
        
        for(auto p : mp) {
            money.push_back(p.second);
        }

        ll ans = 0;
        sort(money.rbegin(), money.rend());
        for(int i = 0; i < n && i < money.size(); i++) {
            ans += money[i];
        }

        cans;
    }
}
