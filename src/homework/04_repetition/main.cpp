//write include statements
#include "repetition.h"

using std::cout;
using std::cin;
using std::string;

//write using statements

int main() 
{
	int choice = 0;
    
    do
    {
        cout << "1-Factorial\n";
        cout << "2-Greatest Common Divisor\n";
        cout << "3-Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << "Factorial of the above number is: " << factorial(num) <<"\n";
            break;

        
        case 2:
            int num1;
            int num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "GCD of the above numbers is: " << great_common_divisor(num1, num2) <<"\n";
            break;

        case 3:
            char confirmation;
            cout << "are you sure you want to exit? (y)/(n)\n";
            cin >> confirmation;
            if (confirmation == 'y' || confirmation == 'Y')
            {
                cout<<"Goodbye!\n";
                return 0;
            }
            
            break;
    
        
        default:
            cout << "Invalid choice. Please pick a number between 1-3.\n";
            break;
        }

    } while (choice != 3);
	return 0;
}