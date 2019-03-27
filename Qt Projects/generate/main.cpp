#include <QCoreApplication>

struct Fill
{
    int value;
    Fill() = default;
    Fill(int v): value(v){}
    int operator()()
    {
        value += 2;
        return value;
    }
};

template <class Iter, class Generate>
void generate(Iter first, Iter last, Generate g)
{
    for(;first != last; ++first)
    {
        *first = g();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
