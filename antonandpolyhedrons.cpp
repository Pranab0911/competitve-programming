#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int> val;
val["Icosahedron"]=20;
val["Cube"]=6;
val["Octahedron"]=8;
val["Dodecahedron"]=12;
val["Tetrahedron"]=4;
int n;
cin>>n;
int c=0;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    c+=val[s];
}
cout<<c<<endl;
return 0;
}