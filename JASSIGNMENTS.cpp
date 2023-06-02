#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int LimitedTime;
	    LimitedTime=10-n;
	    if(LimitedTime>=3)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}// your code goes here
	return 0;
}
