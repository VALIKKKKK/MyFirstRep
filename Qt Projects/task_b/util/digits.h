#ifndef DIGITS_H
#define DIGITS_H
#include <cmath>
#include <array>
#include <vector>

namespace task_b {

std::array<int, 10> count_digits (int value)
{

    std::array<int, 10> result{0};

    for(; value; value /= 10)
    {
        result[value % 10]++;
    }

    return  result;
}

int sum_digits(int a)
{
    int sum = 0;
    for (; a; a /= 10)
    {
        sum += a % 10;
    }
    return sum;
}

int sum_digits_between (int value, int first, int last)
{
    int temp = value / std::pow(10,first);
     int sum = 0;
    for (int i = last; i != 0; --i, temp = temp / 10)
    {
        sum += temp % 10;
    }
    return sum;
}

int reverse_digit (int value)
{
    int result = 0;
    for (;value ; value /= 10)
    {
        result *= 10;
        result = result + value % 10;
    }
    return  result;
}

}
#endif // DIGITS_H
