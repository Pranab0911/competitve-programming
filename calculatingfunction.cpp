#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
if(n%2==0){
    cout<<(n/2);
}
else{
    long long x=(n-1)/2-n;
    cout<<x;
}
return 0;
}