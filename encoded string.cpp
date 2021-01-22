#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int low=1,high=16;
        int mid;
        for(int i=0;i<n;i++)
        {
            mid=(low+high)/2;
            if(s[i]=='0')
            {
                high=mid;
            }
            if(s[i]=='1')
            {
                low=mid+1;
            }
            if(low==high)
            {
                cout<<char(96+low);
                low=1,high=16;
            }
        
        }
        cout<<endl;

        }
        return 0;
    }