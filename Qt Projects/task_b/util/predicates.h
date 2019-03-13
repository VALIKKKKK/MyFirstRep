#ifndef PREDICATS_H
#define PREDICATS_H
#include "digits.h"

namespace stu
{

bool is_even(int a)
{
    return a % 2 == 0;
}

bool greater(int a, int b)
{
    return a > b;
}

bool is_palindrome (int value)
{
    return value == task_b::reverse_digit (value);
}

bool digits_is_equal_n (int value, int n)
{
    auto result = task_b::count_digits(value);
    int counter = 0;
    for (auto i = result.begin(); i !=  result.end(); ++i)
    {
        if ( *i > n )
        {
            return false;
        }

        if (*i ==  n)
        {
            ++counter;
        }

        if (counter > 1)
        {
            return false;
        }
    }
    return counter == 1;
}

}



#endif // PREDICATS_H
