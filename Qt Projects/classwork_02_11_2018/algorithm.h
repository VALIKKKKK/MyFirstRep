#ifndef ALGORITHM_H
#define ALGORITHM_H
template <class Iter, class T, class UO>
T is_accumalate_if(Iter first, Iter last, UO p, T init)
{

    for(; first != last; ++first)
    {
        if(p(*first))
        {
            init += *first;
        }
    }
    return init;
}
#endif // ALGORITHM_H
