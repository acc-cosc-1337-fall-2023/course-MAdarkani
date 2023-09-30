#include "func.h"
#include <iostream>


using std::cout;
using std::cin;
using std::string;

//write using statements

int main() 
{
	int choice = 0;
    
    do
    {
        cout << "1-Get GC Content\n";
        cout << "2-Get DNA Complement\n";
        cout << "3-Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;
        std::string dna_input;

        switch (choice)
        {

        case 1:
            cout << "Enter your DNA: ";
            cin >> dna_input;
            cout << "Your GC Content is: " << get_gc_content(dna_input) <<"\n";
            break;

        
        case 2:
            cout << "Enter your DNA: ";
            cin >> dna_input;
            cout << "Your DNA Complement is: " << get_dna_complement(dna_input) <<"\n";
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
            else
				choice = -1;

            break;
    
        
        default:
            cout << "Invalid choice. Please pick a number between 1-3.\n";
            break;
        }

    } while (choice != 3);
	return 0;
}