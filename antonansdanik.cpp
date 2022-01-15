#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int ac=0,da=0;
for(int i=0;i<n;i++){
    if(s[i]=='A') ac++;
    if(s[i]=='D') da++;
}
if(ac>da) cout<<"Anton";
else if(ac<da) cout<<"Danik";
else if(ac==da) cout<<"Friendship";
return 0;
}