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
	ll d,n,m,ans=0; cin>>d>>m>>n;
	vector<ll> A(n);
	ll temp=m;
	
	for(ll i=0;i<n;i++) cin>>A[i];
	
	ll i=0;
	while(i<n){
	    if(temp>=d){
	        break;
	    }
	    bool ok=false;
	    while(A[i]<=temp && i<n){
	        ok = true;
	        i++;
	    }
	    if(ok){
	        temp = A[i-1]+m;
	        ans++;
	    }
	    else{
	        cout<< "NOT POSSIBLE" <<endl;
	        return 0;
	    }
	}
	
	if(temp>=d) cout << ans <<endl;
	else cout<< "NOT POSSIBLE" <<endl;
	
	return 0;
}
 