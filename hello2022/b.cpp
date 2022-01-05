#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
set<int> s;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    s.insert(arr[i]);

        cout<<s.size()<<endl;
    

}
return 0;
}