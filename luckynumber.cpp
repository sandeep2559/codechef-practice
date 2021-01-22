#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,c;
        cin>>n;
        while(n!=0)
        {
            c=n%10;
            if(c==4)
            {
                count++;
            }
            n=n/10;
        }
        if(count==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}