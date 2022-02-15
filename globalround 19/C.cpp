#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==3 && arr[1]%2==1){
        cout<<-1<<endl;
        continue;
    }
    int i=1;
    while(i<n-1 && arr[i]==1){
        i++;
    }
    if(i==n-1){
        cout<<-1<<endl;
        continue;
    }
    long long ans=0;
    for(int i=1;i<n-1;i++){
       
        ans+=(arr[i]+1)/2;
    }
    cout<<ans<<endl;
}
return 0;
}