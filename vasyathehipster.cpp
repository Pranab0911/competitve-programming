#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int m=min(a,b);
int n=abs(a-b);
cout<<m<<" "<<(n/2);
return 0;
}