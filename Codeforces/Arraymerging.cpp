//IrakliDK
//https://codeforces.com/contest/1831/problem/B
 
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
        vi a(n), b(n);
        forr(i, n) {
            cin >> a[i];
        }
        forr(i, n) {
            cin >> b[i];
        }
        
        int ans = 0;        
        vi at(2 * n);
        vi bt(2 * n);
        
        int tmp = 0;
        for(int i = 1; i < n; i++) {
            if(a[i] != a[i - 1]) {   
                at[a[i - 1] - 1] = max(at[a[i - 1] - 1], i - tmp);
                   tmp = i;
                }
            }
        at[a[n - 1] - 1] = max(at[a[n - 1] - 1], n - tmp);

        tmp = 0;
        for(int i = 1; i < n; i++) {
            if(b[i] != b[i - 1]) {
                bt[b[i - 1] - 1] = max(bt[b[i - 1] - 1], i - tmp);
                tmp = i;
            }
        }
        bt[b[n - 1] - 1] = max(bt[b[n - 1] - 1], n - tmp);

        for(int i = 0; i < 2 * n; i++) {
            ans = max(ans, at[i] + bt[i]);
        }
        
        cout << ans;
        endl;
    }
}