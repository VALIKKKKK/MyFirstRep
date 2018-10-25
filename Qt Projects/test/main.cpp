#include <QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ac = 2;
    for(int i = 0; i < 5; ++i)
    {
        if(i%2 == 0)
        {

            std::cout << i << std::endl;
        }
    }

    return a.exec();
}
