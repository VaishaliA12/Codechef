#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1,s2,s3;
	    cin>>s1;
	    cin>>s2;
	    cin>>s3;
	    //cout<<s1<<endl;
	    int s1_zero=0,s2_zero=0,s3_zero=0;
	    for(auto it : s1){
	        if(it=='0') s1_zero++;
	    }
	    //cout<<s1_zero<<endl;
	    for(auto it : s2){
	        if(it=='0') s2_zero++;
	    }
	    //cout<<s2_zero<<endl;
	    for(auto it : s3){
	        if(it=='0') s3_zero++;
	    }
	    //cout<<s3_zero<<endl;
	    int zeros=s1_zero+s2_zero+s3_zero;
	    //cout<<zeros<<endl;
	    if(zeros%n!=0){
	        cout<<-1<<endl;
	        continue;
	    }
	    int temp=zeros/n;
	    if(temp==0 || temp==3){
	        cout<<0<<endl;
	        continue;
	    }
	    vector<int> vec={s1_zero,s2_zero,s3_zero};
	    //vec.push_back(s1_zero);
	    //vec.push_back(s2_zero);
	    //vec.push_back(s3_zero);
	    sort(vec.rbegin(),vec.rend());
	    //for(int i=0;i<3;i++) cout<<vec[i]<<endl;
	    int maxi=0;
	    for(int i=0;i<temp;i++){
	        maxi+=vec[i];
	    }
	    //int ans=0;
	    int ans=temp*n-maxi;
	    //if(temp==0 || temp==3) cout<<0<<endl;
	    cout<<ans<<endl;
	    
	}
}
