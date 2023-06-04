#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    int value=x%3;
	    if(value==1)
	    {
	        cout<<"HUGE"<<endl;
	    }
	    else if(value==2)
	    {
	        cout<<"SMALL"<<endl;
	    }
	    else
	    cout<<"NORMAL"<<endl;
	}// your code goes here
	return 0;
}
