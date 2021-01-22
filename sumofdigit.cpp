#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int fact=1,num,i;
	    cin>>num;
	    for(i=1;i<=num;i++)
	    {
	        fact=fact*i;
	    }
	    cout<<fact<<endl;
	}
	return 0;
}
