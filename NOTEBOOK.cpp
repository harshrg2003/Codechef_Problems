#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int TotalNoPages=n*1000;
	    int No_OF_Notebooks=TotalNoPages/100;
	    cout<<No_OF_Notebooks<<endl;
	}// your code goes here
	return 0;
}
