#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x<y)
	    cout<<"REPAIR"<<endl;
	    else if(x>y)
	    cout<<"NEW PHONE"<<endl;
	    else
	    cout<<"ANY"<<endl;
	}// your code goes here
	return 0;
}
