#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    if(n<=x)
	    {
	       if(x%n==0)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}// your code goes here
	return 0;
}
