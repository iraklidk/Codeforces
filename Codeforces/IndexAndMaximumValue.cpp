//IrakliDK
//https://codeforces.com/contest/2007/problem/B
 
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
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {
        int n, m; cin >> n >> m;
        vll a(n);
        ll mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        
        for(int i = 0; i < m; i++) {
            char c;
            ll l, r;
            cin >> c >> l >> r;
            if(mx >= l && mx <= r) {
                if(c == '+') { 
                    cout << mx + 1 << " ";
                    mx++;  
                }
                else {
                    cout << mx - 1 << " ";
                    mx--;
                } 
            }
            else cout << mx << " ";
        }

        cout << endl;
    }
}
