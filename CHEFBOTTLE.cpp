#include <iostream>
using namespace std;

int main() {
	int t,n,x,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>k;
	    int noOFbottle=k/x;
	    if(noOFbottle<=n)
	    cout<<noOFbottle<<endl;
	    else
	    cout<<n<<endl;
	}// your code goes here
	return 0;
}
