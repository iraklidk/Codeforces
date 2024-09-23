//IrakliDK
//https://codeforces.com/contest/2013/problem/C
 
using namespace std;
#include <bits/stdc++.h>
#define endl cout << "\n";
#define no cout << "NO" << "\n"
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
ll max(ll k, ll b) {if(k > b) return k; else return b;}
ll min(ll k, ll b) {if(k < b) return k; else return b;}

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        string some="";
        while(some.length() < n)
        {
            cout<<"? "<<some<<"0";
            endl;

            int k; cin >> k;

            if (k) some+="0";
            else
            {
                cout<<"? "<<some<<"1";
                endl;
                cin >> k;
                if (k) some += "1";
                else break;
            }
        }
        while (some.length() < n)
        {
            cout<<"? "<<"0"<<some;
            endl;

            int k; cin >> k;
            if (k) some = "0" + some;
            else some="1"+some;
        }

        cout<<"! "<< some;
        endl;
    }
}