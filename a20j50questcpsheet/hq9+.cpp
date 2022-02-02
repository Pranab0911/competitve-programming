#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
bool flag=false;
for(int i=0;i<s.size();i++){
    if(s[i]>=33 && s[i]<=126){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        flag=true;
    }
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;

}