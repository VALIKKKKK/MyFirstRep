#include <QtTest>

// add necessary includes here

class algorithms : public QObject
{
    Q_OBJECT

public:
    algorithms();
    ~algorithms();

private slots:
    void test_case1();

};

algorithms::algorithms()
{

}

algorithms::~algorithms()
{

}

void algorithms::test_case1()
{

}

QTEST_APPLESS_MAIN(algorithms)

#include "tst_algorithms.moc"
