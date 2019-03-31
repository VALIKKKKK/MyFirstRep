#include <QCoreApplication>

class Test
{
    friend int main(int argc, char *argv[]);
    int def_var = 1;

public:

    int pub_var = 2;

protected:

    int protect_var = 3;

private:

    int priv_var = 1;


};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test b;
    return a.exec();
}
