#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int ans=count(s.begin(),s.end(),'1');//counting total no. of 1's
	    //cout<<ans<<endl;
	    for(int i=n-2;i>=0 && k>0;i--){
	        if(s[i]=='0' && s[i+1]=='1'){
	            s[i]='1';
	            k--;
	            ans++;
	        }
	        //cout<<ans<<endl;
	    }
	    cout<<ans<<endl;
	}
}
