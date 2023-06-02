#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int NoOFTen,NoOFFive,TotalMoney;
	    NoOFTen=10*x;
	    NoOFFive=5*y;
	    TotalMoney=NoOFTen+NoOFFive;
	    cout<<TotalMoney<<endl;
	}// your code goes here
	return 0;
}
