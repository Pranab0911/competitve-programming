#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
int t;
cin>>t;
while(t--){
    
    long long a,b,c;
    cin>>a>>b>>c;
    if((b-a)==(c-b)){cout<<"Yes"<<endl;}
    else if((a+c)%(2*b)==0){cout<<"Yes"<<endl;}
    
    else if((2*b-a)%c==0 && (2*b-a)>0){cout<<"Yes"<<endl;}

    else if((2*b-c)%a==0 && (2*b-c)>0){cout<<"Yes"<<endl;}
   else cout<<"No"<<endl;
}
return 0;
}