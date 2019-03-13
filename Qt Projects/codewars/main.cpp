#include <QCoreApplication>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
#include <string>
#include <set>

/*
bool is_square(int n)
{
  return std::pow((int)sqrt(n),2) == n;
}


using UP = bool(*)(int);
int FindOutlier(std::vector<int> arr)
{
    UP is_even = [](int a){return a%2 == 0;};
    UP is_not_even = [](int a){return a%2 != 0;};
    UP p = is_not_even;
    int temp = is_even(arr[0]) + is_even(arr[1]) + is_even(arr[2]);
    if(temp < 2)
    {
        p = is_even;
    }
    return *std::find_if(arr.begin(),arr.end(),p);
}


int digital_root1(int n)
{
    if(n == 0)
        return 0;
    return n % 10 + digital_root1(n/10);
}
int f(int value)
{
    while(value >= 10)
    {
        value = digital_root1(value);

    }
    return digital_root1(value);
}

int digital_root(int Z) {
    return --Z % 9 + 1;
}


bool is_isogram(std::string str)
{
    std::set<std::string::value_type> res;
    std::for_each(str.begin(),str.end(),[](char& a){
        if(a >= 'A' && a <= 'Z')
        a+=32;});
    for(auto i = str.begin(); i != str.end(); ++i)
    {
        res.insert(*i);
    }
    std::cout << str;
    return res.size() == str.length();
}
*/

template<int v>
struct Fucktoreal
{
  static const int value = v.Fucktoreal<value-1>::value;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> arr {7,5,3,4,9};
    std::string str = "Dermatoglyphics";
    str[0] = 'h';
    Fucktoreal<5>();
   // std::cout << is_isogram(str) << std::endl;
    return a.exec();
}
