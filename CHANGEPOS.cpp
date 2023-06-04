#include <iostream>
using namespace std;

int main() {
	int t,sx,sy,ex,ey;
	cin>>t;
	while(t--)
	{
	    cin>>sx>>sy>>ex>>ey;
	    if(sx!=ex &&sy!=ey)
	    {
	        int noOFmoves=1;
	        cout<<noOFmoves<<endl;
	    }
	    else
	    {
	        int noOFmoves=2;
	        cout<<noOFmoves<<endl;
	    }
	}// your code goes here
	return 0;
}
