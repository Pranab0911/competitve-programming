#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    
    vector<int> v(n);
   for(auto it : v){
       cin>>it;
   }
   sort(v.begin(),v.end());
   bool flag=false;
   for(int i  =1;i<n;i++){
       if(v[i]-v[i-1]<=1){
           flag=true;
       }
   }
   if(flag){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }

}
return 0;
}