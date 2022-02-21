#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, a, b, i, j, l, r;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>a>>b;
        //n=6  //
        ll m=(n/2)-1;
        //m=2
        if(b>a){  //5>2
            l=n-a-1; // 6-2-1=3
            r=b-2;   // 3
        }else{  //3<4
            l=n-a;  
            r=b-1;
        }
        
        
        
        if(l<m || r<m){//6 1 3   m=2
            cout<<"-1\n";
            continue;
        }
        
        
        ll ans[n];
        
        ans[0]=a;
        ans[n-1]=b;
        
        j=n;
        
        for(i=1; i<n-1; i++)
        {
            if(j==a || j==b){
                j--;
            }
            
            if(j==a || j==b){
                j--;
            }
            
            ans[i]=j;
            
            j--;
            
        }
        
        for(i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}