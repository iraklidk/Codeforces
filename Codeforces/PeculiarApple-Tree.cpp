//IrakliDK
//https://codeforces.com/contest/930/problem/A
 
using namespace std;
const int mod = 1e9 + 7;
#include <bits/stdc++.h>
#define endl cout << "\n";
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

void rec(vvi& some, vi& last, int h, int e) {
    last[h]++;
    for(int k : some[e]) {
        rec(some, last, h + 1, k);
    }
}
 
int main()
{
    int n; cin >> n;
    vi arr(1e5+1);
    vi last(1e5+1);
    vvi some(n + 1);    
    for(int k = 2; k < n + 1; k++) {
        cin >> arr[k];
        some[arr[k]].push_back(k);
    }

    rec(some, last, 0, 1);
    int ans = 0;
    forr(k, n + 1) {
        ans += last[k] & 1;
    }

    cans;
}