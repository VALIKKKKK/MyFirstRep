#include <QCoreApplication>
#include "f_list.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    stu::forward_list<int> l{1,2,5,6,7,56,4};
    l.clear();
    l.push_back(4);
    l.push_back(5);
    for(auto i = l.begin(); i != l.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
    return a.exec();
}
