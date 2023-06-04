#include <iostream>
using namespace std;

int main() {
	int t,x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
	    cin>>x1>>y1>>x2>>y2;
	    int x_diff=x1-x2;
	    int y_diff=y1-y2;
	    if(x_diff<0)
	    x_diff=(x_diff*(-1));
	    if(y_diff<0)
	    y_diff=(y_diff*(-1));
	    if(x_diff>=y_diff)
	    {
	        int max=x_diff;
	        cout<<max<<endl;
	    }
	    else
	    {
	        int max=y_diff;
	        cout<<max<<endl;
	    }
	    
	 }// your code goes here
	return 0;
}
