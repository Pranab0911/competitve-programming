#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    map<int,int> m;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    m[a[i]]=i;
    }
    string s;
    cin>>s;
    vector<int> zeros;
    vector<int> ones;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zeros.push_back(a[i]);

        }
        else{
            ones.push_back(a[i]);
        }
    }
    sort(zeros.begin(),zeros.end());
    sort(ones.begin(),ones.end());
    sort(a,a+n);
    reverse(zeros.begin(),zeros.end());
    reverse(ones.begin(),ones.end());
    reverse(a,a+n);
    int i;
    for( i=0;i<ones.size();i++){
        b[m[ones[i]]]=a[i];
    }
    for(int j=0;j<zeros.size();j++){
        b[m[zeros[j]]]=a[i];
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
return 0;
}