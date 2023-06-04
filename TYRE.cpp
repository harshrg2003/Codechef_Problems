#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    int Cartyres=4*m;
	    int biketyres=2*n;
	    int totaltyres=Cartyres+biketyres;
	    cout<<totaltyres<<endl;
	}// your code goes here
	return 0;
}
