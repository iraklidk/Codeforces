//IrakliDK
//https://codeforces.com/contest/2003/problem/C
 
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
 
        int n; cin >> n;
        string s; cin >> s;
 
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
 
        vector<pair<char, int>> mpVec(mp.begin(), mp.end());
 
        sort(mpVec.begin(), mpVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
 
        string ans;
        while (!mpVec.empty()) {
            for (auto it = mpVec.begin(); it != mpVec.end(); ) {
                ans.push_back(it->first);
                it->second--;
                if (it->second == 0) {
                    it = mpVec.erase(it);
                } else {
                    ++it;
                }
            }
        }
 
        cout << ans << endl;   
    }
}