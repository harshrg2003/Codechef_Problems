#include <iostream>
using namespace std;

int main() {
	int n,a,b,ratedOnes,correctOnes;
	cin>>n>>a>>b;
	ratedOnes= n-a;
	cout<<ratedOnes<<"\t";
	correctOnes= ratedOnes-b;
	cout<<correctOnes<<endl;// your code goes here
	return 0;
}
