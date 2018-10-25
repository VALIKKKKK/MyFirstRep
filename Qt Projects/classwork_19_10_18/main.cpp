#include <QCoreApplication>
#include <iostream>
#include <stdexcept>
struct Pair
{
    double first;
    double second;
};
int des(int a, int b, int c)
{
    return pow(b,2)-4*a*c;
}
Pair f(int a, int b, int c)
{
    int d = des(a,b,c);
    if(d<0)
    {
        throw std::invalid_argument("D<0");
    }

        Pair result;
        result.first=(-b+std::sqrt(d))/(2*a);
        result.second=(-b-std::sqrt(d))/(2*a);
        return result;


}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Pair b = f(1,2,1);

    std::cout<< "x= " << b.first << " " << "x1= " << b.second<< std::endl;

    return a.exec();
}
