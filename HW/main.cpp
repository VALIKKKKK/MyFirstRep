#include <iostream>
#include <cmath>
using namespace std;
struct Pair
{
    double first;
    double second;

};
double get_discriminant(double a, double b, double c)
{

    return std::pow(b,2) - (4*a*c);
}
Pair quadratic_equation(double a, double b, double c)
{
    Pair result;
    double discriminant = get_discriminant(a,b,c);
    std::cout <<  discriminant << std::endl;
    result.first = -b + sqrt(discriminant)/a*2;
    result.second = -b - sqrt(discriminant)/a*2;
    return result;

}

int main()
{
    Pair a = quadratic_equation(1,4,5);
    std::cout << a.first << " " << a.second << std::endl;
    return 0;
}
