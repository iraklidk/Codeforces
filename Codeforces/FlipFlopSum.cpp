//IrakliDK
//https://codeforces.com/contest/1778/problem/A
 
using namespace std;
#include <bits/stdc++.h>
#define endl cout << "\n";
#define no cout << "NO" << "\n"
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
bool sortbysec(const pair<int, int>& a, const 
pair<int, int>& b){return(a.second < b.second);}
ll max(ll a, ll b) {if(a > b) return a; else return b;}
ll min(ll a, ll b) {if(a < b) return a; else return b;}
 
int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vll vec(n);
        ll ans = 0;
        forr(i, n) {
            cin >> vec[i];
            ans += vec[i];
        }
 
        forr(i, n - 1) {
            if(vec[i] == vec[i + 1] && vec[i] == -1) {
                ans += 4;
                break;
            }
        }
 
        bool allone = 1;
        
        for(int i = 0; i < vec.size(); i++) {
            if(vec[i] == -1) {
                allone = 0;
                break;
            }
        }
        if(allone) ans -= 4;
 
        cout << ans;
        endl;
    }
}