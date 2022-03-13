#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n];
int b[m];
int sum1=0,sum2=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum1+=a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
    sum2+=b[i];
}
if(sum1==sum2){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
return 0;
}