#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    if((n*x)%4==0)
	   {
	       cout<<(n*x)/4<<endl;
	   }
	    else
	    {
	       cout<<(1+(n*x)/4)<<endl;
	    }
	 }   // your code goes here
	return 0;
}
