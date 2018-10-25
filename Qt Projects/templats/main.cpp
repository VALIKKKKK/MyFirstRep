#include <QCoreApplication>
#include <iostream>
template <class T>
T sum(int a, int b)
{
    return a+b;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[5]{1,2,3,4,5};
    int c = sum<double>(2,2.5);
    double b = sum<int>(2.5 , 5);
    std::cout << c << " " << b << std::endl;
    return a.exec();
}
