#include <iostream>
using namespace std;

int main() {
	int t,n,m,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>x;
	    int totallength=(2*n)+(2*m);
	    int totalcost=totallength*x;
	    cout<<totalcost<<endl;
	}// your code goes here
	return 0;
}
