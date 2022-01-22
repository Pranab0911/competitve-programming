#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int minvalue=INT_MAX;
 int maxvalue=INT_MIN;
 int minindex=0;
 int maxindex=0;
 for(int i=0;i<n;i++){
     int x;
     cin>>x;
     if(x>maxvalue){
        maxvalue=x;
        maxindex=i;
     }
     if(x<=minvalue){
        minvalue=x;
        minindex=i;
     }
 }
 if(maxindex>minindex){
	cout<<(maxindex-1)+(n-minindex)-1;
}
else{
	cout<<(maxindex-1)+(n-minindex);

}
return 0;
}