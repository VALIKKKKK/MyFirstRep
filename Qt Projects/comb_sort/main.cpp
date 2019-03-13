#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <QTimer>
#include <QTime>
#define K 1.24

void print(int* arr, int size)
{
    std::cout << std::endl;
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}

void fill_arr(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        arr[i] = std::rand() % 1000;
    }
}

void comb_sort(int* arr, int size)
{
    int step = size - 1;
    while(step >= 1)
    {
        for(int i = 0; i+step < size; i++)
        {
            if(arr[i] > arr[i+step])
            {
                std::swap(arr[i],arr[i+step]);
            }
        }
        step /= K;
    }
}


int reverse_it(int a)
{
    int b = 0;
    for(; a; a/=10)
    {
        b *= 10;
        b += a % 10;
    }
    return b;
}

bool is_polendrome(int a)
{
    return reverse_it(a) == a;
}

int largest_polendrom_product()
{
    int temp=0;
    for(int i = 999; i >= 100; --i)
    {
        for(int j = 999; j >= 100; --j)
        {
            if(is_polendrome(i*j) && i*j > temp)
            {
                std::cout << i << std::endl;
                std::cout << j << std::endl;
                temp = i*j;
            }
        }
    }
    return temp;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //srand(time(nullptr));
    std::cout << largest_polendrom_product() << std::endl;
    //int arr[10]{0};
   // fill_arr(arr,10);
   // print(arr,10);
   // comb_sort(arr,10);
   // print(arr,10);
    return a.exec();
}
