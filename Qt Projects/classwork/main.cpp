#include <QCoreApplication>
#include <iostream>
float kel_to_cel(float);
float kel_to_cel(float kelvin)
{
    float cel = kelvin - 273.15;
    return cel;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    float kelvin;
    std::cin >> kelvin;
    std::cout << kel_to_cel(kelvin) << std::endl;



    return a.exec();
}
