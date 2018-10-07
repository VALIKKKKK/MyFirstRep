#include <QCoreApplication>
#include <iostream>
#include <cmath>
void print_array(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
        {
         std::cout << arr[i] << std::endl;

        }
    std::cout << std::endl;
}
int f(int a,int key)
{
    return a^key;
}
void copy(int* dest, int* src, int size, int key)
{
    for(int i = 0; i < size; ++i)
    {
        dest[i] = f(src[i],key);
        std::cout << dest[i] << std::endl;
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[5]{1,2,3,4,5};
    print_array(arr,5);
    int dest[5]{0};
    int src[5]{1,2,3,4,5};
     copy(dest,src,5,1);

    return a.exec();
}
