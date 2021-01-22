#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,d;
	    int sum=0;
	    cin>>n;
	    cin>>k;
	    cin>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
            sum=sum+arr[i];
	    }
	    if(k>sum)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(k==sum)
	    {
	        cout<<"1"<<endl;
	    }
	    int c=sum/k;
	    if(c>d)
	    {
	        cout<<d<<endl;
	    }
	    else
	    {
	        cout<<c<<endl;
	    }
	}
	return 0;
}
