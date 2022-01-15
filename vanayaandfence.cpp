#include<bits/stdc++.h>
using namespace std;
int main(){
int n,h;
cin>>n>>h;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int c=0;
for(int i=0;i<n;i++){
    if(arr[i]>h ) c+=2;
    else 
    c++;
  }
  cout<<c;
return 0;
}