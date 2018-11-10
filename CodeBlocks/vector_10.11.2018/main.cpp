#include <iostream>
#include "vector.h"
class Point
{
    int m_x;
    int m_y;
    Point(){std::cout << "point";}
    Point(int x, int y):m_y(y), m_x(x){std::cout << "Point with";}
};

int main()
{
    Vector<int> a{104,101,102,103,105};


    for(int i = 0; i != a.size(); ++i)
    {
        std::cout << a[i] << std::endl;
    }

    return 0;
}
