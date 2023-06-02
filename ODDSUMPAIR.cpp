#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    int sum1=a+b;
	    int sum2=a+c;
	    int sum3=b+c;
	    if(sum1%2!=0 ||sum2%2!=0 ||sum3%2!=0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}// your code goes here
	return 0;
}
