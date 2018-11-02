#ifndef TASKS_H
#define TASKS_H
#include <vector>
#include <my_algoritms.h>
#include <algoritm.h>
#include <iostream>
#include <set>
namespace stu {
template <class Iter>
std::vector<int> get_unique(Iter first, Iter last)
{
    std::vector<int> res;

    res.push_back(*first++);
    for(;first!=last; ++first)
    {

        if(!is_exist(res.begin(),res.end(),*first))
        {
           // std::cout << *first << " ";
           res.push_back(*first);
        }
    }
    return res;
}
template <class Iter>
std::set<int> get_unique_(Iter first, Iter last)
{
    std::set<int> res;
    for(;first!=last; ++first)
    {
    res.insert(*first);

    }
    return res;
}


}



#endif // TASKS_H
