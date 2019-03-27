#include <QCoreApplication>
#include <vector>

template <class T, class Cont = std::vector<T>>
struct stack
{
   Cont cont;
   T& top()
   {
       return cont.back();
   }

   bool empty()
   {
       return cont.empty();
   }

   T& size()
   {
       return cont.size();
   }



};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
