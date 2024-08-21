//IrakliDK
//https://codeforces.com/contest/1903/problem/B
 
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vvll vec(n, vll(n));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> vec[i][j];
            }
        }
        
        string answ = "YES";
        vll ans(n, (1 << 30) - 1);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    ans[i] = ans[i] & vec[i][j];
                    ans[j] = ans[j] & vec[i][j];
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j && (ans[i] | ans[j]) != vec[i][j])
                    answ = "NO";
            }
        }

        cout << answ << endl;

        if(answ == "YES") {
            for(int i : ans) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}