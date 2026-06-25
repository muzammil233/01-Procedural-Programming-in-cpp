#include<iostream>
using namespace std;

int main()
{
	int units;
	cout<<"Enter the number of units consumed: ";
	cin>>units;
	
	int unitCost = 0;
	int unitCharges = 0;
	
	int fixedCharges = 500;
	float serviceTax = 0.0;
	int surcharge = 0;
	float discount = 0.0;
	
	if(units<=100)
	{
		unitCost = 12;		
	}
	else if(units<=300)
	{
		unitCost = 18;	
	}
	else
	{
		unitCost = 25;	
	}
	//Unit Charges.
	unitCharges = units * unitCost;
	float TotalBill = unitCharges;
	
	if(units>500)
	{
		surcharge = 1000;
		TotalBill = TotalBill + surcharge;
	}
	
	TotalBill = TotalBill + fixedCharges;
	//Service Tax.
	serviceTax = TotalBill * 10/100;
	//Tota Bill with Service Tax.
	TotalBill = TotalBill + serviceTax;
	
	
	// Discount.
	if(TotalBill>20000)
	{
		discount = TotalBill * 5/100;
		TotalBill = TotalBill - discount;
	}
	
	// Display Data.
	
	cout<<"\nUnit Charges : "<<unitCharges<<endl;
	cout<<"Fixed Charges : "<<fixedCharges<<endl;	
	cout<<"Surcharge : "<<surcharge<<endl;
	cout<<"Service Tax : "<<serviceTax<<endl;
	cout<<"Discount : "<<discount<<endl;
	cout<<"\nTotal Bill : "<<TotalBill<<endl;
	
	return 0;
		
}