#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    unsigned long long int b = 0;
    std::cout << b-1;
    return a.exec();
}
