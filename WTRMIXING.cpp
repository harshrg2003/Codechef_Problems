#include <iostream>
using namespace std;

int main() {
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x>>y;
	    if(a==b)
	    cout<<"YES"<<endl;
	    else if(a<b)
	    {
	        int tempdiff=b-a;
	        if(x>=tempdiff)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        int tempdiff=a-b;
	        if(y>=tempdiff)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	}// your code goes here
	return 0;
}
