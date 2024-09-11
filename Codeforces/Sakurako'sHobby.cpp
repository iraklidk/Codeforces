//IrakliDK
//https://codeforces.com/problemset/problem/2008/D
 
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
#define no cout << "NO" << "\n"
#define endl cout << "\n";
#define yes cout << "YES" << "\n"
#define forr(i, n) for(int i=0;i<n;i++)
#define pv(vec) for(int i : vec) cout << i << " "
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
        vll vec(n);
        forr(i, n) {
            cin >> vec[i];
        }
        string s; cin >> s;

        vll ans(n, 0);
        vll vis(n);

        for(int i = 0; i < n; i++) {
            if(vis[i]) continue;
            int reachable = 0;
            int k = i;

            while(!vis[k]) {
                vis[k] = 1;
                reachable += s[k] == '1' ? 0 : 1;
                k = vec[k] - 1;
            }
            
            while(vis[k] != 2) {
                ans[k] = reachable;
                vis[k] = 2;
                k = vec[k] - 1;
            }
        }

        pv(ans);
        endl;
    }
}