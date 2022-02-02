#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int milk=(k*l)/nl;//6
int lime=c*d;
int salt=p/np;
int m=min(milk,min(salt,lime));
cout<<m/n<<endl;
return 0;
}