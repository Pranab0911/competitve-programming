#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &m : v){
        cin>>m;
    }
     sort(v.begin(),v.end(), [](int x,int y){
       return      x%2<y%2;
    });
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             ans+=__gcd(v[i],2*v[j])>1;
        }
    }
cout<<ans<<endl;
}
return 0;
}