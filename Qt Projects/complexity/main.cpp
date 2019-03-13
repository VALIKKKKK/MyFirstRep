#include <QCoreApplication>
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#define printContainer(first,last) std::for_each(first,last,[](int a){std::cout << a << " ";})


template<class Iter, class UP>
void bubble_sort(Iter first, Iter last, UP p)
{
    for(Iter i = first; i != last; ++i)
    {
        for(Iter j = first; j != last-1; ++j)
        {
            if(p(*j,*(j+1)))
            {
               std::iter_swap(j,(j+1));
            }
        }
    }
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> vec(100000);
    std::iota(vec.begin(),vec.end(),1);
    std::cout << std::endl;
    std::cout << std::endl;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(),vec.end(),g);
    bubble_sort(vec.begin(),vec.end(),[](int a, int b){return a<b;});
            std::cout << std::endl;
            std::cout << std::endl;
    printContainer(vec.begin(),vec.end());
    return a.exec();
}
