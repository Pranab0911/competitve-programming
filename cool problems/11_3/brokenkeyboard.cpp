#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();){
        if(s[i]==s[i+1]) i+=2;
        else v.push_back(s[i]),i++;
    }
    sort(v.begin(),v.end());
    set<char> st;
    for(auto i : v) st.insert(i);
      for(auto it: st) cout<<it;
    cout<<endl;
}
return 0;
}