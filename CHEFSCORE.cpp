#include <iostream>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    if(y%x==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}// your code goes here
	return 0;
}
