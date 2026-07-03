#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	
	int n;
	cout<<"Enter the limit: ";
	cin>>n;
	
	while(i<=n)
	{
		if(i%5==0)
		{
			cout<<i<<" ";
		}
		i++;
	}
	return 0;
}