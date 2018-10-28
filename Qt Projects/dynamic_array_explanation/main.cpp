#include <QCoreApplication>
#include <iostream>
int* f()
{
    int* arr = new int[5]{123,1321,32,132,123};
    return arr;
}
int* get_digits(int value)
{
    int* arr = new int[10]{0};
    for(;value;value/=10)
    {
        ++arr[value%10];
    }
    return arr;
}
int delete_elements(int* arr, int size)
{
    int j = 0;
    int* temp = new int[size];
    for(int i = 0; i < size; ++i)
    {
       if(arr[i]!=0)
        {
            temp[j]=arr[i];
            std::cout <<"temp = "<<temp[i] << std::endl;
            ++j;
        }
    }
    delete[] arr;
    arr = temp;
    return j;
}
void print_array(int* arr, int size)
{
    for(int i = 0; i<size;++i)
    {
        std::cout << arr[i] << " ";
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int* arr = new int[10]{654,231,321,0,0,0,0,7,6,4};
    //print_array(arr,10);
    std::cout << std::endl;
    int result = delete_elements(arr,10);
    print_array(arr,result);
    return a.exec();
}
