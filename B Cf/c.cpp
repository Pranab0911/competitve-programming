#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
     int n,x;
       cin>>n>>x;
       int a[n];
       for(int i=0;i<n;i++) cin>>a[i];
       vector<int> ans(n+1,INT_MIN);
       ans[0]=0;
       for(int i=0;i<n;i++)
       {
           int temp=0;
           for(int j=i;j<n;j++)
           {
               temp+=a[j];
               ans[j-i+1]=max(ans[j-i+1],temp);
           }
       }
       //for(int i=0;i<=n;i++) cout<<ans[i]<<" ";
       //cout<<endl;
       for(int i=0;i<=n;i++)
       {
           int ans1=0;
           for(int j=0;j<=n;j++)
           {
               ans1=max(ans1,min(j,i)*x + ans[j]);
           }
           cout<<ans1<<" ";
       }
       cout<<endl;
    }

return 0;
}