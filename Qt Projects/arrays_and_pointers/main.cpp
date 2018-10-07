#include <QCoreApplication>
#include <iostream>
void print_array( int* first, int* last)
{
    for(;first!=last;++first)
    {
        std::cout << *first << std::endl;
    }
}
void fill_array(int* first,  int* last)
{
    int temp = 1;
    for(;first!=last;++first,temp*=2)
    {

        *first = temp;

    }
}
void arithmetic_progression(int* first,int* last,int d)
{
    for(int i = 0;first!=last;++first,++i)
    {

    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[50]{0};
    fill_array(arr,arr+50);
    print_array(arr,arr+50);

    return a.exec();
}
