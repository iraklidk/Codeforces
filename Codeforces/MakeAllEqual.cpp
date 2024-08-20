//IrakliDK
//https://codeforces.com/contest/2001/problem/A
 
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
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
 
int main()
{
    int tc; cin >> tc;
    while(tc--) {
 
        int n; cin >> n;
        vi vec(n);
        map<int, int> mp;
        forr(i, n) {
            cin >> vec[i];
            mp[vec[i]]++;
        }

        int mx = INT_MIN;
        for(auto p : mp) {
            mx = max(mx, p.second);
        }
 
        cout << n - mx << endl;
    }
}