#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    if(n==1) ans=1;
	    else if(n%2!=0 && n>1) ans=((n+1)/2)-1;
	    else if(n%2==0) ans=(n+2)/2;
	    cout<<ans<<endl;
	}
}
