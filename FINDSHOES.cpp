#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n<=m)
	    cout<<n<<endl;
	    else
	    {
	    int res=n+(n-m);
	    cout<<res<<endl;
	    }
	}// your code goes here
	return 0;
}
