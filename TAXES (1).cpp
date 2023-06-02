#include <iostream>
using namespace std;

int main() 
{
int x,t,i;
cin>>t;
if(t>100 && t<1)
return 0;
else
{
for(i=0;i<t;i++)
{
cin>>x;
if(x<=100)
cout<<x<<endl;
else
cout<<x-10<<endl;
}
} //your code goes here
	return 0;
}
