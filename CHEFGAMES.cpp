#include <iostream>
using namespace std;

int main() {
	int i,t,r1,r2,r3,r4;
	cin>>t;
	for(i=0; i<t;i++)
	{
	    cin>>r1>>r2>>r3>>r4;
	    if(r1==0 &&r2==0 &&r3==0 &&r4==0)
	    cout<<"IN"<<endl;
	    else
	    cout<<"OUT"<<endl;
	}// your code goes here
	return 0;
}
