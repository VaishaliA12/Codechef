#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c;
	    cin>>n>>c;
	    string s;
	    cin>>s;
	    vector<int> vec(5,0);//for languages
	    for(auto it : s) vec[it-'A']++;
	    int ans=INT_MAX;
	    for(int i=0;i<(1<<5);i++){
	        int c1=0;//Learning ke liye hai
	        int c2=0;//trans ke liye hai
	        vector<int> temp;
	        for(int j=0;j<5;j++){
	            if(i&(1<<j)) c1+=c;
	            else if(vec[j]>0) temp.push_back(vec[j]);
	        }
	        sort(temp.begin(),temp.end());
	        //for(int i=0;i<temp.size();i++) cout<<temp[i]<<endl;
	        int step=1;
	        for(int j : temp){
	            for(int k=0;k<j;k++) c2+=step++;
	        }
	        ans=min(ans,c1+c2);
	        //cout<<ans<<endl;
	    }
	    cout<<ans<<endl;
	}
}
