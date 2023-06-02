#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int doubleroom=3*x;
	    int tripleroom=2*y;
	    if(doubleroom<tripleroom)
	    cout<<doubleroom<<endl;
	    else
	    cout<<tripleroom<<endl;
	}// your code goes here
	return 0;
}
