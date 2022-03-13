#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int res=pow(2,n);
    if(n==1){
        cout<<1<<endl;
    }
    else{
        cout<<res-1<<endl;
    }
}
return 0;
}