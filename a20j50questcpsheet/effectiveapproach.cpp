#include<bits/stdc++.h>
using namespace std;
int main(){
    
map<int,int> m;
long long first=0;
long long second=0;
int n;
cin>>n;
for(int i=0;i<n;i++){
   int y;
   cin>>y;
   m[y]=i;
}
int q;
cin>>q;
for(int i=0;i<q;i++){
    int x;
    cin>>x;
    first+=m[x]+1;
    second+=n-m[x];
}
cout<<first<<" "<<second; 
return 0;
}