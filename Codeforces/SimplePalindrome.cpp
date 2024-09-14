//IrakliDK
//https://codeforces.com/contest/2005/problem/A
 
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
 
string fun(int n) {
    string vow = "aeiou";
    vector<int> counts(5, n / 5); 
    int rem = n % 5;        
 
    for (int i = 0; i < rem; ++i) {
        counts[i]++;
    }
 
    string ans = "";
    for (int i = 0; i < 5; ++i) {
        ans += string(counts[i], vow[i]);
    }
 
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {
 
        int n; cin >> n;
 
    string vow = "aeiou";
    string ans = "";
    
    for (int i = 0; i < n; ++i) {
        ans += vow[i % 5];
    }
        if(n > 5) {
        ans = fun(n);
        }
 
        cout << ans;
        endl;
    }
}
 
// a e i i o o u 