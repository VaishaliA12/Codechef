#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    int ans=y%x;
    if(ans==0) ans=y/x-1;
    else ans=y/x;
    cout<<ans<< endl; 
}
