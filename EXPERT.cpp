#include <iostream>
using namespace std;

int main() {
	int i,t,x,y;
	cin>>t;
	for(i=0; i<t;i++)
	{
	    cin>>x>>y;
	    int percent=(y*100)/x;
	    if(percent>=50)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}// your code goes here
	return 0;
}
