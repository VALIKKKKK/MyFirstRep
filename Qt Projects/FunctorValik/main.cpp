#include <QCoreApplication>
#include <iostream>
#include <cmath>
struct Sum{
    int v;
    int result = 0;
    void operator()(int v)
    {
        result += v;
    }
};

template <typename Iter, typename Functor>
Functor for_each_(Iter first, Iter last, Functor f)
{
    for(;first != last; ++first)
    {
        f(*first);
    }
    return f;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto s = for_each_(arr, arr + 10, Sum());
   // std::cout << s.result;
    int b = std::pow(2,16);
    int* p = &b;
    auto p1 = (char*)p;
    *p1 = 0;
    std::cout << b;

    return a.exec();
}
