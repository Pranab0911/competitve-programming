#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n*2];
    for(int i=0;i<n*2;i++){
        cin>>arr[i];
    }
   sort(arr,arr+2*n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" "<<arr[i+n]<<" ";
   }
   cout<<endl;
}

return 0;
}