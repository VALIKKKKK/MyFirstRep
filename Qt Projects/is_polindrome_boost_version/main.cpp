#include <QCoreApplication>
#include <qdebug.h>

template<class Iter>
bool is_polindrome(Iter first, Iter last)
{
    --last;
    while(first != last)
    {
         qDebug() << *first << " " << *last;
        if(*first != *last)
        {
            return false;
        }
        ++first;
        if(first == last)
        {
            break;
        }
        --last;
    }
   return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[6]{1,2,3,3,2,1};
    qDebug() << is_polindrome(arr,arr+6);
    return a.exec();
}
