#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n); 
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> ans;
    int cur=0;
    for(int i=n-1;i>=0;i--){
       cur=max(cur,v[i]);
       if(cur>0 ) ans.push_back(1);
       else
    ans.push_back(0);
       cur--;
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}