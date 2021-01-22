#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[4],i,y;
	    for(i=0;i<3;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+3);
        
	    for(i=2;i>=0;i--)
	    {
	        if(arr[i]!=arr[i-1])
	        {
	            y=i-1;
                break;
	        }
	    }
	    cout<<arr[y]<<endl;
	}
	return 0;
}
	   
