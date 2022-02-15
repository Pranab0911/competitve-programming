#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
     int n;
        cin>>n;
 
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
 
        int srch= -1, start=-1, last=-1;
 
        for(int i=0; i<n; i++)
        {
            if(a[i]!=i+1)
            {
               srch=i+1;
               start=i;
               break;
            }
        }
 
        if(srch==-1)
        {
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
        }
        else
        {
            for(int i=0; i<n; i++)
                if(a[i]==srch)
                {
                    last=i;
                    break;
                }
            reverse(a.begin()+start, a.begin()+last+1);
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
 
        }
        cout<<endl;
    
}
return 0;
}