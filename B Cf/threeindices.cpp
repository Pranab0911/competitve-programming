#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool f=false;
    int i=0,j=i+1,k=n-1;
    while(i<=j){
        if(arr[i]<=arr[j] && arr[j]<=arr[k]){
            f=true;
            break;
        }
        else{
            i++;
            j++;
            
        }
    }
    if(f==true){
        cout<<"YES"<<endl;
        cout<<i<<" "<<j<<" "<<k<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}