#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    if(a<b)
	    {
	        int min=a;
	        cout<<min<<endl;
	    }
	    else if(b<a)
	    {
	        int min=b;
	        cout<<min<<endl;
	    }
	    else
	    cout<<a<<endl;
	}// your code goes here
	return 0;
}
