#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem,reverse=0;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            reverse=(reverse*10)+rem;
            n=n/10;
        }
        cout<<reverse<<endl;

    }
}