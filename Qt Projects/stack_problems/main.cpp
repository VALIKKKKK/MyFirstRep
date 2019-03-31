#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <stack.h>
#include <algorithm>
#include <fstream>
#include <string>
#include "first_problem.h"
#include "second_problen.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::string b("()()()()()()");
    second_problem(100);
    return a.exec();
}
