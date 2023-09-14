//write include statements
#include<iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	auto grade = 0;
	cout<<"Enter your grade: ";
	cin>>grade;

	auto result_if_else_if = get_letter_grade_using_if(grade);
	cout<<"Using if else if, your grade is: "<<result_if_else_if<<"\n";

	auto result_switch = get_letter_grade_using_switch(grade);
	cout<<"Using Switch, your grade is: "<<result_switch<<"\n";

	return 0;
}