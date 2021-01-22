#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,scope1=0,scope2=0,diff,max=0,temp,winner;
    cin>>n;
    while(n--)
    {
    int a,b;
    cin>>a>>b;
    scope1=scope1+a;
    scope2=scope2+b;
    if(scope1>scope2)
    {
        diff=a-b;
        temp=1;
    }
    else
    {
        diff=b-a;
        temp=2;
    }
    if(diff>max)
    {
        max=diff;
        winner=temp;
    }
}
cout<<winner<<" "<<max;
return 0;
}
