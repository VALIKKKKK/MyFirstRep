#include <QCoreApplication>
#include <algorithm>
#include <cmath>
#define Pi 3.14

class Point
{
public:
    int m_x;
    int m_y;
};

class Line
{
public:
    Point start;
    Point end;
    int lenght()
    {
        return std::sqrt(std::pow(end.m_x - start.m_x,2)+std::pow(end.m_y - start.m_y,2));
    }
};

class Figure
{
public:
    virtual int get_square() = 0;
    virtual int get_perimetr() = 0;
};

class Rectangle: public Figure
{
public:
    Line a;
    Line b;
    int get_square() override
    {
        return a.lenght() * b.lenght();
    }
    int get_perimetr() override
    {
        return (a.lenght() + b.lenght()) * 2;
    }
};

class Triangle: public Figure
{
public:
    Line a;
    Line b;
    Line c;
    int get_square() override
    {
        return (a.lenght() * b.lenght()) * 0.5;
    }
    int get_perimetr() override
    {
        return a.lenght() + b.lenght() + c.lenght();
    }
};

class Circle: public Figure
{
public:
    Line a;
    int get_square() override
    {
        return Pi*std::pow(a.lenght(),2);
    }
    int get_perimetr() override
    {
        return a.lenght() * (2 * Pi);
    }
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Rectangle b;
    return a.exec();
}
