#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int c=0;
while(t--){
    string s;
    cin>>s;
    
    if(s[1]=='+'){
  ++c;
    }
    else{
        --c;
    }

}
cout<<c;
return 0;
}