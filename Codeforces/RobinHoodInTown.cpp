//IrakliDK
//https://codeforces.com/contest/2014/problem/C
 
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
bool sortbysec(const pair<int, int>& k, const 
pair<int, int>& b){return(k.second < b.second);}
ll max(ll k, ll b) {if(k > b) return k; else return b;}
ll min(ll k, ll b) {if(k < b) return k; else return b;}
 
int main()
{
    int tc; cin >> tc;
    
    while(tc--) {
        int n; cin >> n;
        vll vec(n);
        double sum = 0;
        forr(i, n) {
            cin >> vec[i];
            sum += vec[i];
        }

        if(n <= 2) {
            cout << -1;
            endl
            continue;
        }

        double avg = (double) sum / (2 * n);

        sort(vec.begin(), vec.end());

        int mid = vec[n / 2];

        ll ans = 2ll * (ll)n * (ll)mid - (ll)sum + 1;

        cout << (avg > mid ? 0 : ans);
        endl
    }
}