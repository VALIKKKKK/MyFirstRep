#include <QtTest>
#include "../util/predicates.h"
#include "../util/digits.h"
// add necessary includes here

class digits : public QObject
{
    Q_OBJECT

public:
    digits();
    ~digits();

private slots:
    void test_case1();
    void test_is_even();
    void test_is_even_data();
    void test_reverse_digit();
    void test_reverse_digit_data();
    void test_sum_digits();
    void test_sum_digits_data();
    void test_sum_digits_between();
    void test_sum_digits_between_data();

};

digits::digits()
{

}

digits::~digits()
{

}

void digits::test_case1()
{

}

void digits::test_is_even()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(stu::is_even(value), expected);
}

void digits::test_is_even_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 213 << false;
    QTest::addRow("row2") << 208 << true;
    QTest::addRow("row3") << 219 << false;
}

void digits::test_reverse_digit()
{
    QFETCH(int, op1);
    QFETCH(int, op2);
    QCOMPARE(task_b::reverse_digit(op1), op2);
}

void digits::test_reverse_digit_data()
{
    QTest::addColumn<int>("op1");
    QTest::addColumn<int>("op2");
    QTest::addRow("row1") << 123 << 321;
    QTest::addRow("row2") << 222 << 222;
}

void digits::test_sum_digits()
{
    QFETCH(int, op1);
    QFETCH(int, op2);
    QCOMPARE(task_b::sum_digits(op1), op2);
}

void digits::test_sum_digits_data()
{
    QTest::addColumn<int>("op1");
    QTest::addColumn<int>("op2");
    QTest::addRow("row1") << 123 << 6;
    QTest::addRow("row2") << 222 << 6;
}

void digits::test_sum_digits_between()
{
    QFETCH(int, value);
    QFETCH(int, first);
    QFETCH(int, last);
    QFETCH(int, expected);
    QCOMPARE(task_b::sum_digits_between(value, first, last), expected);
}

void digits::test_sum_digits_between_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<int>("first");
    QTest::addColumn<int>("last");
    QTest::addColumn<int>("expected");
    QTest::addRow("row1") << 123456 << 1 << 3 << 12;
    QTest::addRow("row2") << 222 << 1 << 2 << 4;
}

QTEST_APPLESS_MAIN(digits)

#include "tst_digits.moc"
