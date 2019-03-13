#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include "util.h"
#include <vector>



template <class Iter>
void task_1_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    auto max_first = *std::max_element(first1, last1);
    auto max_second = *std::max_element(first2, last2);
    std::size_t count_max_first = std::count(first1, last1, max_first);
    std::size_t count_max_second = std::count(first2, last2, max_second);
    print_arrays(first1, last1, first2, last2, count_max_first, count_max_second);

}

template<class Iter>
void task_1_1_sorted(Iter first1, Iter last1, Iter first2, Iter last2)
{
    auto max_first = *first1 > *(last1-1) ? *first1 : *(last1-1);
    auto max_second = *first2 > *(last2-1) ? *first2 : *(last2-1);
    std::size_t count_max_first = std::count(first1, last1, max_first);
    std::size_t count_max_second = std::count(first2, last2, max_second);
    print_arrays(first1, last1, first2, last2, count_max_first, count_max_second);

}

template<class Iter>
void task_2_1(Iter first, Iter last, Iter first2, Iter last2)
{
    int num_first3 = std::count_if(first, last, [](int i){return i % 3 == 0;});
    int num_second3 = std::count_if(first2, last2, [](int i){return i % 3 == 0;});
    stu::print_arrays(first, last, first2, last2, num_first3, num_second3);
}

/*template<class Iter, class Function>
void universal_task(Iter first1, Iter last1, Iter first2, Iter last2, Function f)
{
    int temp1 = f(first1, last1, [](int i){return i % 3 == 0;});
    int temp2 = f(first2, last2, [](int i){return i % 3 == 0;});
    stu::print_arrays(first1, last1, first2, last2, temp1, temp2);
}

*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int arr[5]{1,2,3,4,4};
    int arr1[5]{1,2,4,6,9};
    /*auto i = stu::_binary_search(arr, arr+5, 4);
    std::cout << i << " " << *i << std::endl;*/
    return a.exec();
}
