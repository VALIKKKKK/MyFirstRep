#include <QCoreApplication>
#include <iostream>

class Base
{
public:
    int b_var = 10;
    void b_f()
    {
        std::cout << b_var1 << std::endl;
    }
    void set_var1(int v)
    {
        b_var1 = v;
    }
    void set_pass(int v)
    {
        pass = v;
    }
    int get_var1()
    {
        return  b_var1;
    }
protected:
    int get_pass()
    {
        return pass;
    }
    int b_var1 = 101;
private:
    int pass = 12345;
};

class Derived: public Base
{
public:
    void d_f()
    {
        std::cout << b_var << " " << b_var1 << " " << get_pass() << std::endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Base b;
    Derived d;
    d.b_var;
    d.b_f();
    d.d_f();
    return a.exec();
}
