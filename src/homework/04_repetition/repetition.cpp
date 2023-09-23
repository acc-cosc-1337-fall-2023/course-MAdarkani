//add include statements
#include "repetition.h"

using std::cout;
using std::cin;

//add function(s) code here

int factorial(int num)
{
    auto sum = 1;

    while (num > 0)
    {
        sum = sum*num;
        num --;
    }
    
    return sum;

}


int great_common_divisor(int num1, int num2)
{

    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int num_swap = num1;
            num1 = num2;
            num2 = num_swap;

        }

        num1 = num1 - num2;
    }
    
    return num1;

}