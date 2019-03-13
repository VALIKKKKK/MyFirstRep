#ifndef TASKS_H
#define TASKS_H
#include <list>
#include <iostream>
#include <algorithm>
#include <vector>

int tasks_1(std::vector<int>& a)
{
    int count = 0;
    for(auto i = a.begin(); i < a.end(); ++i)
    {

        if(*i == *(i + 1))
        {
            ++count;
        }
    }
    return count;
}

void task_14(std::list<int>& a)
{
   auto min_el = std::min_element(a.begin(), a.end());
   auto not_pos = std::find_if(a.rbegin(), a.rend(), [](int a){
    return a < 0;
   });
   std::cout << "Hi bitch";
   a.insert(min_el, *not_pos);
}

#endif // TASKS_H
