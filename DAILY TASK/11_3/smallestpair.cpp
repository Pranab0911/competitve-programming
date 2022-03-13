#include<bits/stdc++.h>
using namespace std;
class Temp{
static int x;
public:
static void Set(int xx){
    x=xx;

}
void Display(){
    cout<<x;
}
};
int Temp::x=0;
int main(){
Temp::Set(33);
Temp::Display();
return 0;
}