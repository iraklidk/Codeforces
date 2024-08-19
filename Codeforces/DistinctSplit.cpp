//IrakliDK
//https://codeforces.com/contest/1791/problem/D
 
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
        string s; cin >> s;
        map<char, int> mp;
        forr(i, n) {
            mp[s[i]]++;
        }
        map<char,int> mp2;

        int mx = mp.size();
        int tmp = mp.size();

        forr(i, n) {
            mp[s[i]]--;
            if(mp[s[i]] == 0) tmp--;
            mp2[s[i]]++;
            int s = mp2.size() + tmp;
            mx = max(mx, s);
        }

    cout << mx << endl;
    }
}