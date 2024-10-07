//IrakliDK
//https://codeforces.com/contest/1791/problem/C

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
typedef vector<vector<ll>> vvl;
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
const int mod = 1e9 + 7;
 
int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        string s; cin >> s;

        int l = 0, r = n - 1;
        while(l < r) {
            if(s[l] == s[r]) break;
            if(s[l] !=  s[r]) n -= 2;
            l++;
            r--;
        }
        
            cout << n << endl;
    }
}