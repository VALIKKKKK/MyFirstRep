#ifndef TESTS_H
#define TESTS_H
#include "my_algoritms.h"
#include <vector>
#include <iostream>
#include <assert.h>
#include <algoritm.h>
#include "tasks.h"
#include <predicates.h>
#define Containers std::vector<int> c{1,12,3,1,564,65,48,44,54,32,1,4}
void swap_test()
{
    Containers;
    auto result_max = stu::find_el(c.begin(),c.end(),stu::greater);
    auto result_min = stu::find_el(c.begin(),c.end(),stu::less<int>);
    stu::iter_swap(result_min,c.begin());
    stu::swap(*result_max,*c.end());
}
void run_all_test()
{
    swap_test();
}
#endif // TESTS_H
