#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,x,y,sum=0;
    cin>>n>>x>>y;
    vector<int> v(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if( (sum%2) == (max(x,y ) - min( x,y))%2  ){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
}
return 0;
}