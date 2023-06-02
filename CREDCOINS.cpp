#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int totalCREDCoins=x*y;
	    int MAXNO_OF_BAGS=totalCREDCoins/100;
	    cout<<MAXNO_OF_BAGS<<endl;
	}// your code goes here
	return 0;
}
