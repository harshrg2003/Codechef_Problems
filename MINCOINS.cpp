#include <iostream>
using namespace std;

int main() {
	int t,x,a,c,b;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if((x%5==0&& x%10==0))
	    {
	         a=x/10;
	        cout<<a<<endl;
	    }     
	   else if(x%5==0) 
	   {
	       a=x/10;
	       c=x%10;
	       b=c/5;
	       cout<<b+a<<endl;
	   }
	   else
	   cout<<-1<<endl;
	}// your code goes here
	return 0;
}
