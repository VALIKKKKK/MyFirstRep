#ifndef UTIL_H
#define UTIL_H
#include <iostream>
#include <algorithm>
#define print_arr(first, last) std::for_each(first, last, [](int value){std::cout << value;})

namespace stu
{

template<class Iter, class T>
void print_arrays(Iter first1, Iter last1,Iter first2, Iter last2, T count_max_first, T count_max_second)
{
if(count_max_first > count_max_second)
{
    print_arr(first1, last1);
    std::cout << std::endl;
    print_arr(first2, last2);
    std::cout << std::endl;
}
else
{
    print_arr(first2, last2);
    std::cout << std::endl;
    print_arr(first1, last1);
    std::cout << std::endl;
}
}

template<class Iter, class T>
int __binary_search(Iter arr, int start, int end, T key)
{

    int midl = 0;

    while(start < end)
    {
        midl = (start + end) / 2;

        if(key>arr[midl])
        {
           start = midl + 1;
        }
        else
        {
            if(key<arr[midl])
            {
                end = midl - 1;
            }
            else
            {
                return midl;
            }
        }


    }
    return -1;
}

template<class Iter, class T>
Iter _binary_search(Iter first, Iter last, T key)
{
    int start = 0;
    int end = last - first;
    int res = __binary_search(first,start,end,key);
    if(res == -1)
    {
        return last;
    }
    return first+res;
}

}
#endif // UTIL_H
