#include <QCoreApplication>
#include <iostream>
#include <algorithm>

int find_min_digit(int value)
{
    int min = value % 10;

    for(;value; value /= 10)
    {
        if(min > value % 10)
        {
            min = value % 10;
        }
    }
    return min;
}

int find_max_digit(int value)
{
    int max = value % 10;
    while(value)
    {
        value /= 10;
        if(max < value % 10)
        {
            max = value % 10;
        }
    }
    return max;
}

int f(int value)
{
    int temp;
    int d = 1;
    int min = find_min_digit(value);
    int max = find_max_digit(value);
    int res = 0;
    for(;value; value /= 10)
    {
        temp = (value % 10) * d;
        if(value % 10 == min)
        {
            temp = max * d;
        }
        if(value % 10 == max)
        {
            temp = min * d;
        }

        d *= 10;
        res += temp;
    }
    return res;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << f(12345);
    return a.exec();
}
