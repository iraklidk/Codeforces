//IrakliDK
//https://codeforces.com/contest/1760/problem/E
 
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
        
        ll n; cin >> n;
        vi vec(n);
        forr(i, n) {
            cin >> vec[i];
        }

        ll ans1 = 0, ans2 = 0;
        ll zero = 0;
        ll flipOne = 0, flipZero = 0;
        ll countOne = 0, countZero = 0;
        bool cz = 0, co = 0; ll mai = 0;
        
        for(int i = n - 1; i >= 0; i--) {
            if(vec[i] == 0) zero++;
            else mai += zero;
        }

        for(int i = 0; i < n; i++) {
            if(!cz && vec[i] == 0) {
                cz = 1;
                continue;
            }
            if(!cz && vec[i] == 1) countOne++;
            if(cz && vec[i] == 0)  flipZero++;
        }
 
        ans1 = mai - countOne + flipZero;
 
        for(int i = n - 1; i >= 0; i--) {
            if(!co && vec[i] == 1) {
                co = 1;
                continue;
            }
            if(!co && vec[i] == 0) countZero++;
            if(co && vec[i] == 1)  flipOne++;
        }
 
        ans2 = mai + flipOne - countZero;
 
        ans2 = max(mai, ans2);

        cout << max(ans1, ans2) << endl;
    }
}