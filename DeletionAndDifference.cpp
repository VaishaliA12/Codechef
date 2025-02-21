#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    vector<int> freq(n+1,0);
	    for(auto it : a) freq[it]++;
	    int unpaired=0,paired=0,c_zero=0;
	    for(int i=1;i<=n;i++){
	        if(freq[i]%2==1) unpaired++;
	    }
	    c_zero=freq[0];
	    paired=(n-unpaired-c_zero)/2;
	    //cout<<paired<<endl;
	    //int ans=c_zero+paired;
	    //cout<<ans;
	    //if(paired>c_zero) unpaired=1;
	    //cout<<unpaired<<endl;
	    c_zero+=paired;
	    if(c_zero>=1) cout<<unpaired+1<<endl;
	    else cout<<unpaired<<endl;
	}
}
