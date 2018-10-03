#include <QCoreApplication>
#include <iostream>
struct Point
{
    int m_x;
    int m_y;
    Point()
    {
        m_x = 0;
        m_y = 0;
    }
    Point(int x, int y)
    {
        m_x = x;
        m_y = y;
    }
    void print_point()
    {
         std::cout << "x = " << m_x << std::endl;
          std::cout << "y = " << m_y << std::endl;
    }
};
struct Line
{
    Point m_start;
    Point m_end;
    Line (Point start, Point end)
    {
     m_start = start;
     m_end = end;
    }

};
void print_point(Point p)
{
     std::cout << "x = " << p.m_x << std::endl;
      std::cout << "y = " << p.m_y << std::endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Point p(5,5);
    //int a1{5};
    Point p1;
    Point arr[3]{Point(1,2),Point(10,20),Point(21,12)};
    for(int i = 0;i<3;++i)
    {
       arr[i].print_point();
    }
    return a.exec();
}
