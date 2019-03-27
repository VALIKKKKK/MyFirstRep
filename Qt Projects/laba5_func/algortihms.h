#ifndef ALGORTIHMS_H
#define ALGORTIHMS_H
#include <algorithm>
#include <iostream>

template <class Iter>
int arr_average(Iter first, Iter last, int size)
{
    int res = 0;
    for(; first != last; ++first)
    {
        res += *first;
    }
    return res/size;
}

template<class Iter>
void print_arr(Iter first, Iter last)
{
    std::for_each(first, last, [](int a){std::cout << a << std::endl;});
    std::cout << std::endl;
}



#endif // ALGORTIHMS_H
