#include <iostream>
#include <iomanip>
using namespace std; 

int main() 
{

	double pounds, price, pricePerPound;
	
	cout<<"Enter Weight in Pounds"<<endl;
	cin>>pounds;
	cout<<"Enter Total Price"<<endl;
	cin>>price;

	pricePerPound = price/pounds;

	cout<<"Price per Pound: $"<<fixed<<setprecision(2)<<pricePerPound<<endl;
	
	return 0;
}
