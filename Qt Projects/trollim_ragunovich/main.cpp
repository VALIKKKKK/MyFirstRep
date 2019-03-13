#include <QCoreApplication>
#include <iostream>
#define poopa(start, times) for(int i = start; i < times; ++i)
#define lol(start, times) for(int i = start; i < times; ++i){std::cout << "b X kor mudak a support xuzhe" << std::endl;}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    poopa( 0, 10)
    {
        std::cout << "Hello" << std::endl;
    }

    lol(0,10000);

    return a.exec();
}
