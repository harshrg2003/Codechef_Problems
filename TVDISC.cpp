#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    int Costdiscount1=a-c;
	    int Costdiscount2=b-d;
	    if(Costdiscount1<Costdiscount2)
	    cout<<"First"<<endl;
	    else if(Costdiscount2<Costdiscount1)
	    cout<<"Second"<<endl;
	    else
	    cout<<"Any"<<endl;
	}// your code goes here
	return 0;
}
