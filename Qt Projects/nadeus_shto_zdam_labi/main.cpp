#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <utility.h>

using VecInt = std::vector<int>;
template <typename UnaryPredicate>
Pair<VecInt,VecInt> f1(int* arr, int size, UnaryPredicate p)
{
    Pair<VecInt,VecInt> result;
    for(int i = 0; i<size;++i)
    {
        if(p(arr[i]))
        {
            result.first.push_back(arr[i]);
        }
        else
        {
            result.second.push_back(arr[i]);
        }
    }
    return result;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[5]{1,2,-3,4,5};
    Pair<VecInt,VecInt> result = f1(arr,5,[](int a){return a>0;});
    print_vector(result.first);
    print_vector(result.second);

    return a.exec();
}
