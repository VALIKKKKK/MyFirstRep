#include <QtTest>
#include "../util/predicates.h"
// add necessary includes here

class predicates_test : public QObject
{
    Q_OBJECT

public:
    predicates_test();
    ~predicates_test();

private slots:
    void test_case1();
    void test_greater();
    void test_greater_data();
    void test_is_palindrome();
    void test_is_palindrome_data();

};

predicates_test::predicates_test()
{

}

predicates_test::~predicates_test()
{

}

void predicates_test::test_case1()
{

}

void predicates_test::test_greater()
{
    QFETCH(int, a);
    QFETCH(int, b);
    QFETCH(bool, expected);
    QCOMPARE(stu::greater(a, b), expected);
}

void predicates_test::test_greater_data()
{
    QTest::addColumn<int>("a");
    QTest::addColumn<int>("b");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 14 << 5 << true;
    QTest::addRow("row2") << 6 << 12 << false;
}

void predicates_test::test_is_palindrome()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(stu::is_palindrome(value), expected);
}

void predicates_test::test_is_palindrome_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 123 << false;
    QTest::addRow("row2") << 222 << true;
}

QTEST_APPLESS_MAIN(predicates_test)

#include "tst_predicates_test.moc"
