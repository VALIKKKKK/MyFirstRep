#include <QCoreApplication>
#include <iostream>
struct Game
{
    int deck[3][13] = {{1,2,3,4,5,6,7,8,9,10,11,12,13},{65,50,51,52,53,54,55,56,57,36,74,81,75},{11,2,3,4,5,6,7,8,9,10,10,10,10}};


};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "hello world";
    return a.exec();
}
