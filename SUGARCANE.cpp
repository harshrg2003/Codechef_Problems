#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int TotalIncome=50*n;
	    int Spentsugarcane=(20*TotalIncome)/100;
	    int SpentSaltMint=(20*TotalIncome)/100;
	    int SpentOnRent=(30*TotalIncome)/100;
	    int Profit=TotalIncome-(Spentsugarcane+SpentSaltMint+SpentOnRent);
	    cout<<Profit<<endl;
	}// your code goes here
	return 0;
}
