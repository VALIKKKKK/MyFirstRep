#ifndef UTILITY_H
#define UTILITY_H
#include <iostream>
template < typename T1, typename T2>
struct Pair
{
    T1 first;
    T2 second;
};
template<typename Conteiner>
void print_vector(Conteiner v)
{
    for(auto i = v.begin(); i!=v.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}
#endif // UTILITY_H
