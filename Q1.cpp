#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define INF 1e9+7
#define endl "\n"
#define fin cin
#define ub upper_bound
#define lb lower_bound
using namespace std;
 

int main() {
	// your cod goes here
	FastIO
	string s; cin>>s;
    for(ll i=0;i<s.length();i++){
        if(i>=s.length()-i-1) break;
        
        if(s[i]!=s[s.length()-1-i]){
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
	return 0;
}
 