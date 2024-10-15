//IrakliDK
//https://codeforces.com/contest/2025/problem/B

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
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpii;
bool sortbysec(const pair<int, int>& k, const
pair<int, int>& b){return(k.second < b.second);}
const int diri[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
const int dirj[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
ll max(ll k, ll b) {if(k > b) return k; else return b;}
ll min(ll k, ll b) {if(k < b) return k; else return b;}
 
int main()
{
    int t; cin >> t;
    vll a(t), b(t);
    forr(i, t) cin >> a[i];
    forr(i, t) cin >> b[i];

    forr(i, t) {
        int co = 1;
        for(int k = 0; k < b[i]; k++) {
            co *= 2;
            co %= mod;
        }
        cout << co << endl;
    }
}

// n = 5 k = 2 -> c5(2)   c(n)(k-1) + c(n-1)(k-1)