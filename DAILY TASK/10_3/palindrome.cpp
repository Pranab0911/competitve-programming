#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1])
        return false;
    }
    return true;
}
int main(){
string s;
cin>>s;
if(isPalindrome(s)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}