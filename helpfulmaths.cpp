
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[1000];
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+') continue;
        else
        arr[c++]=s[i]-'0';
    }
    sort(arr,arr+c);
    for(int i=0;i<c;i++){
        cout<<arr[i];
        if(i==c-1 ) break;
        cout<<"+";
    }
}