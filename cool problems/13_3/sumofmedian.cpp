#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v(n*k);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int su=0;
    int res=0;
    for(int i=n;i>=0;i=i-2){
        res=min(v[i],v[i-1]);
su+=res;
    }
    cout<<su<<endl;
}
return 0;
}