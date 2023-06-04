#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int expense=30*y;
	    if(expense<=x)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}// your code goes here
	return 0;
}
