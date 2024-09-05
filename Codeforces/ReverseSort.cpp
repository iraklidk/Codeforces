//IrakliDK
//https://codeforces.com/problemset/problem/1605/B
 
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
ll min(ll a, ll b) {if(a < b) return a; else return b;}
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
 
ll sum(ll l, ll r) {
    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {

        int n; cin >> n; string s; cin >> s;
        vll ans;
        ll cz = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') cz++;
        }

        for(int i = 0; i < n; i++) {
            if(s[i] == '1' && i <= cz - 1) ans.push_back(i);
            if(s[i] == '0' && i > cz - 1) ans.push_back(i);
        }

        if(ans.size() == 0) {
            cout << 0 << endl;
            continue;
        }

        cout << 1 << endl;
        cout << ans.size() << " ";
        for(int i : ans) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}