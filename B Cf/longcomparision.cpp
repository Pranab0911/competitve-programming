#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string first,second;
        int a,b;
        cin>>first>>a;
        cin>>second>>b;
        int first_size=first.size()+a;
        int second_size=second.size()+b;
        if(first_size>second_size)
        {
            cout<<">"<<endl;
        }
        else if(first_size<second_size)
        {
            cout<<"<"<<endl;
        }
        else
        {
                while(second.size()<first.size())
                {
                    second+='0';
                }
                while(second.size()>first.size())
                {
                    first+='0';
                }
            if(first>second)
            {
                cout<<">"<<endl;
            }
            else if(first<second)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }

        }
    }
}
