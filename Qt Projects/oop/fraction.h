#ifndef FRACTION_H
#define FRACTION_H
struct Fraction
{
    int m_num;
    int m_dnum;
    Fraction(){cout << "Fraction()" << endl;}
    Fraction(int num,int dnum):m_num(num),m_dnum(dnum){cout << "Fraction(int,int)" << endl;}
};
#endif // FRACTION_H
