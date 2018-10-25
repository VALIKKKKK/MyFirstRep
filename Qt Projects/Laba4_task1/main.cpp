#include <QCoreApplication>
#include <iostream>
#include <ctime>
struct Elements_
{
    int max;
    int min;
};
void fill_array(int* first,int* last)
{
    for(;first!=last;++first)
    {
        *first = 1 + rand() % 10;
    }
}
void print_array(int* first, int* last)
{
    for(;first!=last;++first)
    {
        std::cout << *first << std::endl;
    }
}
bool not_is_positeve(int a)
{
    return a<0;
}
int sum_arr(int* first, int* last)
{
    int temp = 0;
    for(;first!=last;++first)
    {
        if(not_is_positeve(*first))
        {
            temp+=*first;
        }
    }
    return temp;
}
Elements_ elements( int* arr, int size)
{
    Elements_ result;
    result.max = arr[0];
    result.min = arr[0];

    for(int i = 0;i < size;++i)
    {
        if(arr[i]>result.max)
        {
            result.max = i;
        }
        if(arr[i]<result.min)
        {
            result.min = i;
        }
    }
    return result;
}
int mul_array(int* arr,Elements_ a)
{
    int temp = 1;
   for(;(a.min)!=(a.max-1);++a.min)
   {
       temp = temp * arr[a.min];
       std::cout << "min = " << arr[a.min] << " temp = " << temp<< std::endl;
   }
    return temp;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    srand(time(nullptr));
    int arr[5]{0};
    fill_array(arr,arr+5);
    print_array(arr,arr+5);
    Elements_ n;
    Elements_ c = elements(arr,5);
    std::cout << "sum if not is even elements of array = " << sum_arr(arr,arr+5) << std::endl;
    std::cout << c.max <<" "<< c.min << std::endl;
    std::cout << mul_array(arr,elements(arr,5)) << std::endl;
    return a.exec();
}
