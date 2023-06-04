#include <iostream>
using namespace std;

int main() {
	int t,temp;
	cin>>t;
	while(t--)
	{
	    cin>>temp;
	    int rev=0,digit,n;
	    n=temp;
	    while(n!=0)
	    {
	        digit=n%10;
	        rev=rev*10+digit;
	        n=n/10;
	    }
	    if(temp==rev)
	    cout<<"wins"<<endl;
	    else
	    cout<<"loses"<<endl;
	}// your code goes here
	return 0;
}
