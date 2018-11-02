#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
double task_4_1(double n)
{
    double temp = 1.1;
    int sign = 1;
    for(double i = 1.2; i<n ; i += 0.1)
    {
        temp += i * sign;
        sign *= -1;
    }
        return temp;

}
double task_4_1_V2(int  times)
{
    double temp = 1.1;
    int sign = 1;
    int j = 0;
    for(double i = 1.2; j<times ; i += 0.1,++j)
    {
        temp += i * sign;
        sign *= -1;
    }
        return temp;

}
int task_3_2(int a, int b)
{
    int temp = 0;
    for(;a<b;++a)
    {
        temp = temp+a;
    }
    return temp;
}
void fibanacci(int times)
{
    int temp1 = 0;
    int temp2 = 1;
    cout << temp1 << endl;
    cout << temp2 << endl;
    int temp3;
    for(int i = 0; i<times; ++i)
    {
        temp3 = temp2 + temp1;
        cout << temp3 << endl;
        temp1 = temp2;
        temp2 = temp3;
    }
}
int task(int  times)
{
    int temp = 1;
    int sign = 1;
    for(int i = 2; i<times ; ++i)
    {
        temp += i * sign;
        sign *= -1;
    }
        return temp;

}
int sum_7(int times)
{
    int temp = 0;
    for(int i = 0; i<times; ++i)
    {
        temp += pow(7,i);
    }
    return temp;
}
int sum_sign_of_num(int a)
{
    int temp = 0;
    while(a)
    {
        temp += a%10;
        a /= 10;

    }
    return temp;
}
int gcd(int a, int b)
{
   int temp;
    while(temp = a%b)
    {
        a = b;
        b = temp;
    }
    return b;
}
int gcd(int a, int b, int c)
{
    return gcd(gcd(a,b),c);
}
int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}
std::vector<int> all_divider(int a)
{
   std::vector<int> b;
    for(int i = 1; i <= a; ++i)
    {
        if(a%i==0)
        {

            b.push_back(i);
        }
    }
    return b;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> c = all_divider(6);

    for(auto i = c.begin(); i < c.end(); ++i)
    {
        cout << *i << endl;
    }
    //fibanacci(5);
    return a.exec();
}
