#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
bool flag=0;
for(int i=0;i<n;i++){
    if(s[i]>='A'&& s[i]<='Z'){
        flag=1;
    }
}
if(flag==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}