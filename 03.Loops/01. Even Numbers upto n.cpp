#include<iostream>
using namespace std;

int main()
{
	int i = 2;
	
	int n;
	cout<<"Enter the limit: ";
	cin>>n;
	
	while(i<=n)
	{
		cout<<i<<" ";
		
		i+=2;
	}
	return 0;
}