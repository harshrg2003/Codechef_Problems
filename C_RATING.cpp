#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int diff=y-x;
	    if(x==y)
	    {
	        diff=0;
	        cout<<diff<<endl;
	    }
	    else
	    {
	        if(diff%8==0)
	        {
	            cout<<(diff/8)<<endl;
	        }
	        else
	        {
	            if(diff<=8)
	            {
	                int diff1=1;
	                cout<<diff1<<endl;
	            }
	            else
	            {
	                int diff1=(diff/8)+1;
	                cout<<diff1<<endl;
	            }
	        }
	    }
	}// your code goes here
	return 0;
}
