#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,a,b,c;
	    cin>>x>>y>>z>>a>>b>>c;
	    int ans=0;
	    int small=min(x,a);// small assign karna hai
	    ans+=small;
	    a-=small;
	    x-=small;
	    int large=min(y,b);// large assign karna hai
	    ans+=large;
	    b-=large;
	    y-=large;
	    int extralarge=min(z,c);// extra-large assign karna hai
	    ans+=extralarge;
	    c-=extralarge;
	    z-=extralarge;
	    //cout<<ans<<endl;
	    int temp1=min(y,a);//large to small
	    ans+=temp1;
	    a-=temp1;
	    y-=temp1;
	    int temp2=min(z,a);//extra-large to small
	    ans+=temp2;
	    a-=temp2;
	    z-=temp2;
	    int temp3=min(z,b);//extra-large to large
	    ans+=temp3;
	    b-=temp3;
	    z-=temp3;
	    cout<<ans<<endl;
	}
}


