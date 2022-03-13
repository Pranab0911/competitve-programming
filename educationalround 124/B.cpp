#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n>19){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int arr[n];
        arr[0]=1;
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]*3;
                    }
                    for(int i=0;i<n;i++){
                        cout<<arr[i]<<" ";
                    }
cout<<endl;

    }
}
return 0;
}