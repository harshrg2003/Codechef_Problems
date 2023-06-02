#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(y>x)
	    {
	        int additionalseats=y-x;
	        cout<<additionalseats<<endl;
	    }
	    else
	    {
	       int additionalseats=0;
	        cout<<additionalseats<<endl;
	    }
	}// your code goes here
	return 0;
}
