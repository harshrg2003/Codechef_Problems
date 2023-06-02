#include <iostream>
using namespace std;

int main() {
	int i,t,x,y;
	cin>>t;
	for(i=0; i<t;i++)
	{
	    cin>>x>>y;
	    int ToptenPrizeM=10*x;
	    int RestPrizeM=90*y;
	    int TotalPrizeM=ToptenPrizeM + RestPrizeM;
	    cout<<TotalPrizeM<<endl;
	}// your code goes here
	return 0;
}
