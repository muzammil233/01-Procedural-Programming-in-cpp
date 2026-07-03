#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	
	int n;
	cout<<"Enter the limit: ";
	cin>>n;
	
	int sum = 0;
	
	while(i<=n)
	{
		sum += i;
		
		i++;
	}
	
	cout<<"Sum of numbers upto "<<n<<" is "<<sum<<endl;
	
	return 0;
}