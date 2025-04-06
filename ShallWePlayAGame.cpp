#include <bits/stdc++.h>
using namespace std;
const int mod=998244353;
long long solve(long long a,long long b){ // yeh base or exp ke liye hai
    long long ans=1;
    while(b>0){
        if(b%2==1) ans=(ans*a)%mod;
        //cout<<ans<<endl;
        a=(a*a)%mod;
        b/=2;
        //cout<<a<<b<<endl;
    }
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    if(n%2==0) ans=(3*solve(4,(n/2-1)))%mod;//3*4^(n/2-1)-1
	    else ans=(solve(4,(n-1)/2))%mod;//4^((n-1)/2) 
	    cout<<ans<<endl;
	}
}