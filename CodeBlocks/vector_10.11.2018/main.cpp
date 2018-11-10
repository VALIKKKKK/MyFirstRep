#include <iostream>
#include "vector.h"
class Point
{
    public:
    int m_x;
    int m_y;
    Point(){std::cout << "Point()" << std::endl;}
    Point(int x, int y):m_y(y), m_x(x){std::cout << "Point(int x, int y)" << std::endl;}
    ~Point(){std::cout << "~Point" << std::endl;}
};

int main()
{
    //Point c;

    Vector<int> a;
    for(int i = 0; i < 1000; ++i)
    {
        std::cout << a.size() << " " << a.capacity() << std::endl;
        a.push_back(i);

    }
    /*
    for(int i = 0; i != a.size(); ++i)
    {
        std::cout << a[i] << std::endl;
    }*/

    return 0;
}
