#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==3){
        cout<<3<<" "<<2<<" "<<1<<endl;
        cout<<1<<" "<<3<<" "<<2<<endl;
        cout<<3<<" "<<1<<" "<<2<<endl;
    }
    else{
        vector<int> v;
        for(int i=n;i>0;i++){
            v.push_back(i);

        }
        for(int i=0;i<n;i++){
            int temp =  v[0];
            for(int j=1;j<n;j++){
                v[j-1]=v[j];
                cout<<v[j-1]<<" ";
            }
            v[n-1]=temp;
            cout<<temp;
            cout<<endl;
        }
    }
}
return 0;
}