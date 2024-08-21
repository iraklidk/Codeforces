//IrakliDK
//https://codeforces.com/contest/1957/problem/B
 
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
    while(tc--){
        
        int n, k; cin >> n >> k;

        int bit = 0;
        for(int i = 0; i < 31; i++) {
            if(k & (1 << i)) bit = i;
        }

        vll ans(n, 0);

        if(n == 1) cout << k << endl;
        else {
            ans[0] = (1 << bit) - 1;
            ans[1] = -1 * ans[0] + k;
            for(int i : ans) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}