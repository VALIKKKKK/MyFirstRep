#ifndef FIRST_PROBLEM_H
#define FIRST_PROBLEM_H

#include <iostream>
#include <vector>
#include <stack.h>


template <class Iter>
bool is_valid_brackets(Iter first, Iter last)
{
    using Type = typename std::remove_reference<decltype (*first)>::type;
    stu::stack<Type> temp;
    for(auto i = first; i != last; ++i)
    {

        if(*i == '(')
        {

            temp.push(*i);
        }
        else
        {
            if(temp.empty())
            {
                return false;
            if(*i != temp.top())
            {
                temp.pop();
            }
            else
            {
                return false;
            }
            }
        }
    }
    return true;
}

#endif // FIRST_PROBLEM_H
