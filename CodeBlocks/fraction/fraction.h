#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include "algorithm.h"
struct Fraction
{
    int m_num;
    int m_denum;
    Fraction() = default;
    Fraction(int num, int denum):m_num(num),m_denum(denum){}
    Fraction operator* (/* Fraction* this ,*/const Fraction& that)
    {
        Fraction result;
        result.m_num = (*this).m_num * that.m_num;
        result.m_denum = this->m_denum * that.m_denum;
        return result;
    }
    Fraction operator/(const Fraction& that)
    {
        Fraction result;
        result.m_num = this->m_num / that.m_num;
        result.m_denum = this->m_denum / that.m_denum;
        return result;
    }
    Fraction operator+ (const Fraction& that)
    {
        Fraction result;
        int common_denum = MyMath::gcd(this->m_denum,that.m_denum);
        result.m_num = this->m_num * (common_denum / m_denum) + that.m_num * (common_denum / m_denum);
        result.m_denum = this->m_denum * (common_denum / m_denum) + that.m_denum * (common_denum / m_denum);
        return result;
    }
    Fraction operator- (const Fraction& that)
    {
        Fraction result;
        int common_denum = MyMath::gcd(this->m_denum,that.m_denum);
        result.m_num = this->m_num * (common_denum / m_denum) - that.m_num * (common_denum / m_denum);
        result.m_denum = this->m_denum * (common_denum / m_denum) - that.m_denum * (common_denum / m_denum);
        return result;
    }
};


#endif // FRACTION_H_INCLUDED
