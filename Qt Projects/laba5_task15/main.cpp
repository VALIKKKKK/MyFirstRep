#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algoritm.h>
bool f(int a, int b)
{
    return a>0 ^ b>0;
}
bool greater(int a, int b)
{
    return a>b;
}
bool less(int a, int b)
{
    return a<b;
}
template <typename BinaryPredicate>
bool f1(int* arr, int size, BinaryPredicate p)
{
    for(int i = 0; i < size-1;++i)
    {
        if(!p(arr[i],arr[i+1]))
        {
            return false;
        }
    }
    return true;
}
template <typename BinaryPredicate>
int f2(int* arr, int size, BinaryPredicate p)
{
    int temp = 0;
    for(int i = 0; i < size-1;++i)
    {
        if(p(arr[i],arr[i+1]))
        {
            ++temp;
        }
    }
    return temp;
}
void print_array(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout<<arr[i]<<std::endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[3]{5,2,1};
    std::vector<int> arr1{123,13,21,51,68541,65,1};
    //bool result = f1(arr,3,greater);
    //int* result = stu::find(arr,arr+3,3);
    auto result1 = stu::find(arr1.begin(),arr1.end(),123);
    //*result = 10;
    stu::print_vector(arr1);
    /*if(result == arr+3)
    {
        std::cout << "daun takogo zdes' net" << std::endl;
    }*/
    print_array(arr,3);
    //std::cout << *result << std::endl;
    return a.exec();
}
