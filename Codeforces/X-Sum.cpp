//IrakliDK
//https://codeforces.com/problemset/problem/1676/D
 
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

int calcSum(int row, int col, vector<vector<int> >& chess) {
    int sum = chess[row][col];
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        sum += chess[i][j];
    }
    for(int i = row, j = col; i >= 0 && j < chess[0].size(); i--, j++) {
        sum += chess[i][j];
    }
    for(int i = row, j = col; i < chess.size() && j < chess[0].size(); i++, j++) {
        sum += chess[i][j];
    }
    for(int i = row, j = col; i < chess.size() && j >= 0; i++, j--) {
        sum += chess[i][j];
    }
    sum -= 4 * chess[row][col];
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--) {

        int n, m; cin >> n >> m;
        vector<vector<int> > chess(n, vector<int>(m));
        forr(i, n) {
            forr(j, m) {
                cin >> chess[i][j];
            }
        }

        ll ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ans = max(ans, calcSum(i, j, chess));
            }
        }
        
        cout << ans;
        endl;
    }
}