#include <QCoreApplication>
#include <algorithm>
#include <iostream>
#include <algortihms.h>
#include <utility>
#include <vector>

template <class Iter>
int task1(Iter first, Iter last)
{
    int temp = std::count_if(first, last, [](int a){return a % 2 == 0;});
    return temp;
}

template <class Iter>
void task2(Iter first, Iter last, int num_of_el, int size)
{
    first[--num_of_el] = arr_average(first, last, size);
}

template<class Iter>
int task3(Iter first, Iter last, int size)
{
    int temp = std::count_if(first, last, [first, last, size](int a){return abs(a) > arr_average(first, last, size);});
    return temp;
}

template <class Iter>
void task4(Iter first, Iter last)
{
    std::iter_swap(first, std::max_element(first, last));
}

template <class Iter>
void task5(Iter first, Iter last)
{
    std::iter_swap(std::max_element(first, last), std::min_element(first, last));
}

template <class Iter>
void task6(Iter first, Iter last)
{
    int temp1 = std::count_if(first, last, [](int a){return a % 2 == 0;});
    int temp2 = std::count_if(first, last, [](int a){return !(a % 2 == 0);});
    if(temp1 > temp2)
    {
        std::cout << "even more";
    }
    if(temp1 == temp2)
    {
        std::cout << "equal amount";
    }
    else
    {
        std::cout << "odd more";
    }

}

template <class Iter>
int task7(Iter first, Iter last)
{
    int first_el = *first;
    int res = std::count_if(first, last, [first_el](int a){return a > first_el;});
    return res;
}

template<class Iter>
std::pair<int, int>
task8(Iter first, Iter last)
{
    std::pair<int*, int*> p = std::minmax_element(first, last);
    std::pair<int, int> res;
    res.first = p.first - first;
    res.second = p.second - first;
    return res;
}

template<class Iter>
void task9(Iter first, Iter last, int size)
{
    int arr[8]{0};
    int average = arr_average(first, last, size);
    for(int i = 0;first != last; ++first, ++i)
    {
        arr[i] = *first - average;
    }
    print_arr(arr, arr+8);
}

template<class Iter>
void task10(Iter first, Iter last)
{
    std::vector<int> neg_el;
    std::for_each(first, last, [first, last, &neg_el](int a){if(a < 0)
        {
            neg_el.push_back(a);
        }});
    int average_neg_abs_num = arr_average(neg_el.begin(), neg_el.end(), neg_el.size());
    auto res = std::accumulate(first, last, 0, [average_neg_abs_num](int a, int b){
        if(std::abs(a) > average_neg_abs_num)
            return a+b;
        else
        {
            return a;
        }
    });
    std::cout << res;
}

template <class Iter>
void task11(Iter first, Iter last)
{
    auto init = std::count_if(first, last, [](int a){return a % 2 == 0 && a > 0;});
    auto res = std::accumulate(first, last, 0,[first, last](){std::for_each(first, last [first, last](int a){[first, last](int a, int b){b = *std::find_if(first, last, [](int a){return a % 2 == 0 && a > 0;});
                                                                                                                                         std::cout << a << " " << b << std::endl;
                                                                                                                                                                                                                                                                  return a + b;
                                                                                                                                        }});});
    std::cout << init << " " << res << std::endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[8]{1,2,3,4,5,6,7,8};
    task11(arr, arr+8);
    return a.exec();
}
