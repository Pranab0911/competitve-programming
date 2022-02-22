#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{

    int n,i=0;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    reverse(v.begin(),v.end());
     for(auto it : v)
     {
         cout<<it<<" ";
         
     }
cout<<endl;
     n--;
     while(n--)
     {
         swap(v[i],v[i+1]);
         for(auto it : v)
         {
             cout<<it<<" ";
         }
             cout<<endl;

         swap(v[i],v[i+1]);
         i++;

     }

}
return 0;
}