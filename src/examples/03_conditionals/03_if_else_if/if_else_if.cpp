//write include statement for if_else header file
#include "if_else_if.h"

using std::string;

//write code for the is_even function that returns true if num is even, false otherwise

string get_generation(int year)
{
    string result;

    if (year >= 1996 && year <=2014)
    {
        result = "Centenial";
    }
    else if (year >=1977 && year <=1995)
    {
        result = "Millenial";
    }
    else if (year >=1965 && year <= 1976)
    {
        result = "Generation X";
    }
    else if(year >= 1946 && year <= 1964)
    {
        result = "Baby Boomer";
    }
    else if(year >= 1925 && year <= 1945)
    {
        result = "Silent Generation";
    }
    else
    {
        result = "invalid year";
    }

    return result;

}