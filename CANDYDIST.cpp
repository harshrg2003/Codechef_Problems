#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n%m==0)
	    {
	    int NOOFcandies=n/m;
	    if(NOOFcandies%2!=0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	}// your code goes here
	return 0;
}
