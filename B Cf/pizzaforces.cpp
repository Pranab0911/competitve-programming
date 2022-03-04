// Pranab
//////////////////////////header files ////////////////////////////////
#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>
using namespace std;
///////////////////////////////short forms//////////////////////////////////
#define ll long long
#define ull unsigned long long;
#define nline "\n"
#define all(x) x.begin(),x.end()
#define sc second
#define ft first
#define pb push_back
#define ppb pop_back
#define mod 998244353 
const ll INF=1e18;
////////////////////////important  functions//////////////////////////////////

void google(int t)
 {
     cout << "Case #" << t << ": ";
     }
bool cmp(int a, int b)
{
    return a < b;
    }
int ceilDiv(ll a,ll b)
{
    if(a%b == 0) return a/b; 
    return a/b + 1;
    }
bool isPrime(int n)
{
    if(n==1 or n==0) 
return false; 
if(n==2 or n==3) 
return true;
 if(n%2==0 or n%3==0)
  return false; 
  for(int i=5;i*i<=n;i+=6)
  {
      if(n%i==0 or n%(i+2)==0)
      return false;
      }
      return true;
}
ll lcm(ll a,ll b){if(a==0||b==0)return 0;return (a*b)/__gcd(a,b);}

/********************
 * * * * * * * * * * 4041-2020=2021
 *  * ** * * ** * * *
 * C O D E
 *  ******* * ** * * *
 *   *****************/
void solve(){
ll n;
cin>>n;
ll x=n/6;
ll y=n%6;
if(n<=6){
    cout<<"15"<<nline;
}
else if(y==0)
{
    cout<<x*15<<nline;
}
else if (y<=2)
{
cout<<(x*15)+5<<nline;
}
else if(y<=4){
    cout<<(x*15)+10<<nline;
}
else{
    x++;
    cout<<x*15<<endl;
}



}




int main(){
int t;
cin>>t;
//int i=1;   
while(t--){
 //      cout<<"Case #"<<i<<": ";
    solve();
   // i++;
}
return 0;
}