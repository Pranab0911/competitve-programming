#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
int max=x;
int min=x;
int c=0;
for(int i=1;i<n;i++){
    cin>>x;
    if(x<min){
        min=x;
        c++;
    }
    else if(x>max){
        max=x;
        c++;
    }

}
cout<<c<<endl;
return 0;
}