#ifndef TEAMPLATES_H
#define TEAMPLATES_H

template<const int a, const int b>
struct Sum
{
    int operator()()
    {
        return a+b;
    }
};

template<typename T = int>
struct Vector
{

};

#endif // TEAMPLATES_H
