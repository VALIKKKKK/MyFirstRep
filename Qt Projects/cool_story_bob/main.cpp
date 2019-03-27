#include <QCoreApplication>
#include <iostream>
#include <typeinfo>

void f(double* a)
{
    std::cout << *a;
}

void f(char* a)
{
    std::cout << *a;
}

void f1(void* a)
{
    std::cout << *(int*)a;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int b = 2;
    const int& r = b;
    const_cast<int&>(r) = 10;
    std::cout << b;
    return a.exec();
}
