#ifndef PREDICATES_H
#define PREDICATES_H
namespace stu {
bool greater(int a, int b)
{
    return a>b;
}
template < class T>
bool less(T a, T b)
{
    return a<b;
}
}

#endif // PREDICATES_H
