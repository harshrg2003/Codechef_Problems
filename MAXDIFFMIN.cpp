#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,max,min;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
        {
            if(a>c)
            max=a;
            else
            max=c;
        }
        else
        {
            if(b>c)
            max=b;
            else
            max=c;
        }
        if(a<b)
        {
            if(a<c)
            min=a;
            else
            min=c;
        }
        else
        {
            if(b<c)
            min=b;
            else
            min=c;
        }
        int difference=max-min;
        cout<<difference<<endl;
    }
	// your code goes here
	return 0;
}
