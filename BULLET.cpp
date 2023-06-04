#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    int timetaken=y/x;
	    if(z>=timetaken)
	    {
	        int diff=z-timetaken;
	        cout<<diff<<endl;
	    }
	    else
	    {
	        int diff=0;
	        cout<<diff<<endl;
	    }
	}// your code goes here
	return 0;
}
