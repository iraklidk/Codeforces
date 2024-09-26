//IrakliDK
//https://codeforces.com/contest/2014/problem/A
 
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
        int n, k;
        cin >> n >> k;
        vll vec(n);
        forr(i, n) {
            cin >> vec[i];
        }
 
        int ans = 0;
        int gold = 0;
 
        forr(i, n) {

            if(vec[i] >= k) {
                gold += vec[i];
            }

            else if(vec[i] == 0) {
                if(gold) {
                    gold--;
                    ans++;
                }
            }

        }
 
        cout << ans;
        endl
    }
}