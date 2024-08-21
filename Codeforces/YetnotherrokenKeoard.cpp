//IrakliDK
//https://codeforces.com/contest/1907/problem/B
 
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
            string s; cin >> s;
            
            string ans = "";
            stack<int> idxsUpper;
            stack<int> idxLower;
            int ansidx = 0;

            forr(i, s.size()) {
                if(s[i] == 'b' && idxLower.size()) {
                    ans[idxLower.top()] = '0';
                    idxLower.pop();
                }
                else if(s[i] == 'B' && idxsUpper.size()) {
                    ans[idxsUpper.top()] = '0';
                    idxsUpper.pop();
                }
                else if(s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B') {
                    ans+= s[i];
                    idxsUpper.push(ansidx);
                    ansidx++;
                }
                else if(s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b') {
                    ans += s[i];
                    idxLower.push(ansidx);
                    ansidx++;
                } 
            }
            
            string anss = "";
            forr(i, ans.size()) {
                if(ans[i] != '0') anss+= ans[i];
            }
            cout << anss << endl;
        }
    
}