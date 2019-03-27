#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int b;
    for(;;)
    {
        std::cin >> b;
        if(b == 0)
        {
            std::cout << "Ty for using this soft" << std::endl;
            break;
        }
        if(b > 0)
        {
            std::cout << "Hell " << std::endl;
        }
    }
    return a.exec();
}
