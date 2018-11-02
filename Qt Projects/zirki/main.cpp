#include <QCoreApplication>
#include <vector>
#include <algoritm.h>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> c{10,2,-3,5,4,6,7};
    f(c.begin(),c.end(),[](){std::cout <<'*'<<" ";});
    return a.exec();
}
