#ifndef ALGORITM_H
#define ALGORITM_H
#include <iostream>
namespace stu
{
template<typename T, typename Iterator>
Iterator find(Iterator first, Iterator last, T value)
{
    for(;first!=last;++first)
    {
        if(*first==value)
        {
            return first;
        }
    }
    return first;
}
template<typename Conteiner>
void print_vector(Conteiner v)
{
    for(auto i = v.begin(); i!=v.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}
}
#endif // ALGORITM_H
