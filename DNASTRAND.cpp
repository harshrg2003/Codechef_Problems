#include <iostream>
using namespace std;

int main() {
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='A')
	        {
	            s[i]='T';
	            cout<<s[i];
	        }
	        else if(s[i]=='T')
	        {
	            s[i]='A';
	            cout<<s[i];
	        }
	        else if(s[i]=='C')
	        {
	            s[i]='G';
	            cout<<s[i];
	        }
	        else
	        {
	            s[i]='C';
	            cout<<s[i];
	        }
	    }
	    cout<<endl;
	    
	}// your code goes here
	return 0;
}
