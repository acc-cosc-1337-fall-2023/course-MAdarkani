//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin; 
using std::cout;

int main()
{
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	cout<<"Enter your bill amount: ";
	cin>> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	//return tax_amount;

	cout<<"Enter your tip %: ";
	cin>> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	//return tip_amount;

	total = tip_amount+tax_amount+meal_amount;

	cout<<"Meal Amount: "<<meal_amount<<'\n';
	cout<<"Sales Tax: "<<tax_amount<<'\n';
	cout<<"Tip Amount: "<<tip_amount<<'\n';
	cout<<"Total: "<<total<<'\n';
	
	return 0;	

}
