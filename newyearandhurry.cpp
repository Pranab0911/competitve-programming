#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int res=240-k;
int sum=0,c=0;
for(int i=1;i<=n;i++){
    sum+=i*5;
    if(sum<=res){
        c++;
    }
}
cout<<c;
return 0;
}