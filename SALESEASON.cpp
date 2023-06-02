#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    int discountedPrize;
	    if(x<=100)
	    cout<<x<<endl;
	    else if(x>100 &&x<=1000)
	    {
	    discountedPrize=x-25;
	    cout<<discountedPrize<<endl;
	    }
	    else
	    {
	        if(x>1000 &&x<=5000)
	        {
	        discountedPrize=x-100;
	        cout<<discountedPrize<<endl;
	        }
	        else
	        {
	            discountedPrize=x-500;
	            cout<<discountedPrize<<endl;
	        }
	    }
	}// your code goes here
	return 0;
}
