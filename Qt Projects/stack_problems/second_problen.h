#ifndef SECOND_PROBLEN_H
#define SECOND_PROBLEN_H
#include "stack.h"

void second_problem(int n)
{
    stu::stack<int> a;
    for(int i = 0; i < n; i += 2)
    {
        a.push(i);
        if(i % 3 == 0)
        {
            std::cout << i << std::endl;
        }
    }
}



#endif // SECOND_PROBLEN_H
