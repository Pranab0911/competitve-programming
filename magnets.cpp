#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,c=0;
cin>>n;
int arr[n];
i=0;
for( i=0;i<n;i++){
    cin>>arr[i];
}

for( i=0;i<n;i++){
    if(arr[i]!=arr[i+1]) c++;
}
cout<<c<<endl;
return 0;
}