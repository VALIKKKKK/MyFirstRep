#ifndef UTILITY_H
#define UTILITY_H
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void iter_swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
#endif // UTILITY_H
