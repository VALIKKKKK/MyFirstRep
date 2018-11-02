#ifndef ALGORITM_H
#define ALGORITM_H
#include <iostream>
template < class Iter, class UO>
void f(Iter first, Iter last, UO p)
{

    for(;first!=last; ++first)
    {
        int temp = *first;
        if(temp>=0)
        {
            while(temp)
            {
                p();

                --temp;
            }

        }

        std::cout << std::endl;
    }
}
#endif // ALGORITM_H
