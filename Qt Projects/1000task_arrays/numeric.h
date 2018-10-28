#ifndef NUMERIC_H
#define NUMERIC_H
int gcd(int a,int b)
{
    int temp;
    while(temp = a % b)
    {
        a = b;
        b = temp;
    }
    return b;
}



#endif // NUMERIC_H
