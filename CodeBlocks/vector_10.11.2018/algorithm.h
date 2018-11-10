#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
namespace stu{
template<class Iter1, class Iter2>
Iter2 copy(Iter1 first, Iter1 last, Iter2 d_first)
{
    while (first != last) {
        *d_first++ = *first++;
    }
    return d_first;
}
int min_element()
{

}
}



#endif // ALGORITHM_H_INCLUDED
