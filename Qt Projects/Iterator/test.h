#ifndef TEST_H
#define TEST_H

struct Point
{
    int m_x;
    int m_y;
    Point() = default;
    Point(int x, int y):m_x(x),m_y(y){}
    struct Color
    {
        int a;

    };
};

template<class T, class Iter>
Iter find(Iter first, Iter last, T key)
{
    for(;first != last; ++first)
    {
        if(*first == key)
        {
            return first;
        }
    }
    return last;
}


#endif // TEST_H
