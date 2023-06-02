#include <iostream>
using namespace std;

int main() {
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x>>y;
	    int Powerneed=a*b;
	    int Powerprovide=x*y;
	    if(Powerprovide>=Powerneed)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}// your code goes here
	return 0;
}
