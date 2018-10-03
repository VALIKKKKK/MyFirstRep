#include <QCoreApplication>
#include <iostream>
using namespace std;
struct Point
{
    int m_x;
    int m_y;
    Point()
    {
        m_x = 0;
        m_y = 0;
    }
    Point(int x,int y)
    {
        m_x = x;
        m_y = y;
    }
};

int get_index(Point* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(arr[0].m_x < arr[i].m_x && arr[i].m_x < arr[size-1].m_x)
        {
            return i;
        }
    }
    return -1;
}
int get_index_revers(Point* arr, int size)
{
    for(int i = size-1; i > -1; --i)
    {
        if(arr[i].m_x < arr[size-1].m_x && arr[0].m_x < arr[i].m_x)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Point arr[5]{Point(2,3),Point(20,30),Point(12,31),Point(22,32),Point(42,34)};
    int result = get_index(arr,5);
    int result1 = get_index_revers(arr,5);
    std::cout << result << std::endl;
    std::cout << result1 << std::endl;
    return a.exec();
}
