#include<bits/stdc++.h>
using namespace std;
bool sqrt_check(int n)
{
    if(floor(log2(n))==ceil(log2(n)))
        return true;
    else
        return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==3)
        {
            cout<<"2 3 1"<<endl;
            continue;
        }
        if(sqrt_check(n)==true)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> x;
        x.push_back(2);
        x.push_back(3);
        x.push_back(1);
        int e=n;
        e=e-3;
        int skip=4;
        while(e)
        {
            if(sqrt_check(skip))
            {
                x.push_back(skip+1);
                x.push_back(skip);
                e-=2;
                skip+=2;
            }
            else
            {
                x.push_back(skip);
                e--;
                skip++;
            }
        }
        for(int i=0;i<x.size();i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;

    }
}
