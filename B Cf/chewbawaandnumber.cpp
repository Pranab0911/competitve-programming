#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
int i=0;
int arr[100];
while(n!=0){
    int r=n%10;
    if(9-r > r){
    arr[i]=r;
    }
    else{
        arr[i]=9-r;
    }
    i++;
    n=n/10;
}
if(arr[i-1]==0){
    cout<<9;
    i--;
}
for(int j=i-1;j>=0;j--){
    cout<<arr[j];
}
return 0;
}