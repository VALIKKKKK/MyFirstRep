#include <QCoreApplication>
#include <iostream>
#include <ctime>
struct Point
{
    int x;
    int y;
    Point()
    {
        do
        {
            x = -50+rand()%100;
            y = -50+ rand()%100;
        }
        while(x==0 || y == 0);
        std::cout << x <<" "<< y << std::endl;
    }
    Point(Point &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    bool operator > (const Point &second)
    {
        return ( (*this).x > second.x && this->y > second.y );
    }

};
Point f(int a, int b)
{
   int x = a;
    int y = b;
    Point result;
    result.x = x;
    result.y = y;
    return result;
}
void find_max_x(Point &arr,int size)
{
    Point temp(arr);
    for(int i = 1; i<size;++i)
    {
        if(arr > temp)
        {
            temp = arr[i];
        }
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Point arr[5];
    Point c(5,5);
    std::cout << c.x << " " << c.y << std::endl;
    return a.exec();
}
