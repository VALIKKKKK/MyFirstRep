#include <QCoreApplication>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fill_array(int* arr, int size)
{
    for(int i = 0;i < size; ++i)
    {
        arr[i] = 1 + rand() % 100;
    }
}
void print_array(int* arr, int size)
{
    for(int i = 0;i < size; ++i)
    {
        cout << arr[i] << endl;
    }
}
void buble_sort(int* arr, int size)
{
    for(int i = 0;i<size;++i)
    {
        for(int j = 0; j < size - i - 1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void insertion_sort(int* arr, int size)
{
    for (int i = 0; i<size-1; ++i)
    {
        int min_index = i;
        for(int j = i+1;j<size;++j)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;

            }
        }
        if(min_index!=i)
        {
            swap(arr[i],arr[min_index]);
        }

    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    srand(time(nullptr));
    int arr[10]{0};
    fill_array(arr,10);
    print_array(arr,10);
    cout << endl;
    insertion_sort(arr,10);
    cout << endl;
    print_array(arr,10);
    return a.exec();
}
