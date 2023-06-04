#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x%y==0)
	    {
	    int minmoves=x/y;
	    cout<<minmoves<<endl;
	    }
	    else 
	    {
	        int remaind=x%y;
	        int minmoves=(x/y)+remaind;
	        cout<<minmoves<<endl;
	    }
	   
	}// your code goes here
	return 0;
}
