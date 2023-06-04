#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    bool isprime=0;
	    cin>>a>>b;
	    int sum=a+b;
	    int i;
	    for(i=2;i<18;i++)
	    {
	        if(sum%i==0)
	        {
	            if(i!=sum)
	            {
	            isprime=1;
	            break;
	            }
	            else
	            {
	            isprime=0;
	            continue;
	            }
	        }
	    }
	    if(isprime==0)
	    cout<<"Alice"<<endl;
	    else
	    cout<<"Bob"<<endl;
	}// your code goes here
	return 0;
}
