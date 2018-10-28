#include <QCoreApplication>
#include <iostream>
#include <algoritm.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char* str_1 = "Hello world!";
        char str_2[20];
         char str_3[20];
         char str_4[20];
        //std::cout << f7("Hello WWWorld!!!!.;") << std::endl;
        //f8("aaaaa45jl'io");
        f3(str_1,str_2);
        f4(str_1,str_3);
        f5(str_1,str_4);
        std::cout << str_2 << std::endl;
        std::cout << str_3 << std::endl;
        std::cout << str_4 << std::endl;
    return a.exec();
}
