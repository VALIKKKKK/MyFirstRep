#include <QCoreApplication>
#include <iostream>
#include <vector>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   std::vector<int> vec;
    vec.reserve(100);
    std::cout << vec.size()<< std::endl;
    vec.resize(6,2);
    std::cout << vec.size()<< std::endl;
    for(int n : vec) {
            std::cout << n << '\n';
    }
    for(int i = 0; i<5; i++)
    {
        vec.push_back(i);
    }
    std::cout << vec.size()<< std::endl;
    for(int n : vec) {
            std::cout << n << '\n';
    }
    return a.exec();
}
