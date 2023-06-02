#include <iostream>
using namespace std;

int main() {
	int n,i,a[100],evenNum=0,oddNum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	    evenNum++;
	    else
	    oddNum++;
	}
	if(evenNum>oddNum)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;// your code goes here
	return 0;
}
