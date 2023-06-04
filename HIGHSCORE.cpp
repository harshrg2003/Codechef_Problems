#include <iostream>
using namespace std;

int main() {
	int t,n,na,nb,nc,nd;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>na>>nb>>nc>>nd;
	    if(na>=nb &&na>=nc &&na>=nd)
	    cout<<na<<endl;
	    else if(nb>=na &&nb>=nc &&nb>=nd)
	    cout<<nb<<endl;
	    else if(nc>=na &&nc>=nb &&nc>=nd)
	    cout<<nc<<endl;
	    else
	    cout<<nd<<endl;
	}// your code goes here
	return 0;
}
