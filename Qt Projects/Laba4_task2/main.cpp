#include <QCoreApplication>
#include <iostream>
#include <ctime>
struct Pair
{
    int zero1;
    int zero2;
};

void fill_array(int* first,int* last)
{
    for(;first!=last;++first)
    {
        *first = -5 + rand() % 10;
    }
}
void print_array(int* first, int* last)
{
    for(;first!=last;++first)
    {
        std::cout << *first << std::endl;
    }
}
int mul_even_numbers(int* arr, int size)
{
    int temp = 1;
    for(int i = 0;i < size;++i)
    {
        if(i%2 == 0)
        {
            temp = temp * arr[i];
        }
    }
    return temp;
}
Pair elements( int* arr, int size)
{
    Pair result;
    result.zero1 = -1;
    result.zero2 = -1;

    for(int i = 0;i < size;++i)
    {
        if(arr[i]==0 && result.zero1 == -1 )
        {
            result.zero1 = i;

        }
    }
        for(int j = size;j > 0;--j)
        {
            if(arr[j]==0 && result.zero2 == -1)
            {
                result.zero2 = j;

            }
    }

    return result;
}

int sum_zero_array(int* arr,Pair a)
{
   if(a.zero1 == -1 && a.zero2 == -1)
   {
       return false;
   }
   int temp = 0;
   for(;(a.zero2)!=(a.zero1);--a.zero2)
   {
       temp = temp + arr[a.zero2];
       std::cout << "min = " << arr[a.zero2] << " temp = " << temp<< std::endl;
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
    Pair c = elements(arr,5);
    std::cout << "product of even numbers of the array element = " << mul_even_numbers(arr,5) << std::endl;
    std::cout << "amount from zero to zero = " << sum_zero_array(arr,elements(arr,5)) << std::endl;
    return a.exec();
}
