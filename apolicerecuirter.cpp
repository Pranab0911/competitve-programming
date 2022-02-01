#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int curoff=0;
int untreat=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x>0){
        curoff+=x;
    }
    else{
        if(curoff<1){
            untreat++;
        }
        else{
            curoff--;
        }
    }
    
}
cout<<untreat;
return 0;
}