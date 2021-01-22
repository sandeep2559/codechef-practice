#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c && b>c)
	    {
	        cout<<b<<endl;
	    }
	    else if(b>a && b>c && c>a)
	    {
	        cout<<c<<endl;
	    }
	    else
	    {
	        cout<<a<<endl;
	    }
	}
	return 0;
}
