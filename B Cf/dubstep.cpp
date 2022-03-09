#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
bool f=true;
for(int i=0;i<s.size();i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
    {
        i=i+2;
        if(f!=true) cout<<" "; f=true;
        continue;
    }
    else{
        f=false;
        cout<<s[i];
    }
}

return 0;
}