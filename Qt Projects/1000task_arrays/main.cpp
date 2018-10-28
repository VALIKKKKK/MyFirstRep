#include <QCoreApplication>
#include <iostream>
struct Fraction
{
    int m_num;
    int m_dnum;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
