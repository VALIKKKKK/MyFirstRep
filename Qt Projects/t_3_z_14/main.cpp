#include <QCoreApplication>
#include <algorithm>
#include <tasks.h>
#include <list>
#include <iostream>
#include <vector>
#include <teamplates.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   /* std::list<int> x {-1,2,3,4,-51,6,-7,8,9};
    std::for_each(x.begin(), x.end(), [](int a){std::cout << a << " ";});
    task_14(x);
    std::cout << std::endl;
    std::for_each(x.begin(), x.end(), [](int a){std::cout << a << " ";});
    std::vector<int> y {1,1,1,1,1,1,2,2,2,3,3,5};
    std::cout << tasks_1(y) << std::endl;*/

    Sum<4,5> b;
    std::cout << b();


    return a.exec();
}
