//IrakliDK
//https://codeforces.com/contest/2013/problem/A
 
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
        int x, y; cin >> x >> y;
 
        if(n == 0) {
            cout << 0;
            endl;
            continue;
        }
 
        ll t = 0;

        if(y >= x) {
            
            t = (n + x - 1) / x;
        }
        
        else {
            t += (n + y - 1) / y;
        }
 
        cout << t;
        endl;
    }
}
