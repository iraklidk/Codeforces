//IrakliDK
//https://codeforces.com/problemset/problem/1941/B
 
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
const int diri[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
const int dirj[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
ll max(ll k, ll b) {if(k > b) return k; else return b;}
ll min(ll k, ll b) {if(k < b) return k; else return b;}
 
int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vll vec(n);
        forr(i, n) {
            cin >> vec[i];
        }

        for(int k = 1; k < n - 1; k++) {
            if(vec[k] < 2 * vec[k - 1]) break;
            vec[k] -= 2 * vec[k - 1]; 
            vec[k + 1] -= vec[k - 1];
            vec[k - 1] = 0;
        }

        string ans = "YES";
        for(int k = 0; k < n; k++) {
            if(vec[k] != 0) {
                ans = "NO";
                break;
            }
        }

        cout << ans;
        endl
    }
}