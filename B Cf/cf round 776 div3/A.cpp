#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    char c;
    cin>>c;
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(s[i]==c && (s.size()-i-1)%2==0  && (i-0)%2==0)
       f=true;
    }
    if(f==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}