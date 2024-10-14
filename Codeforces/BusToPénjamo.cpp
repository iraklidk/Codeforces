//IrakliDK
//https://codeforces.com/contest/2022/problem/A

const int m = 1e9+7;
using namespace std;
#include <bits/stdc++.h>
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

        int n, r; cin >> n >> r;
        vll vec(n);
        forr(i, n) {
            cin >> vec[i];
        }

        int ans = 0;
        int bad = 0;

        forr(i, n) {
            ans += vec[i] & 1 ? vec[i] - 1 : vec[i];
            if(vec[i] & 1) bad++;
        }

        int rem = (r - ans / 2);

        if(rem >= bad) ans += bad;

        else {
            while(rem < bad && rem > 0) {
                bad -= 2;
                rem--;
            }
            ans += bad;
        }

        cans;
    }
}