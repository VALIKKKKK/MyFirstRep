#ifndef MY_ALGORITMS_H
#define MY_ALGORITMS_H
#include <list>
#include <algoritm.h>
namespace stu{
template <class Iter, class T>
bool is_exist(Iter first, Iter last, T value)
{
    return !(last == stu::find(first,last,value));
}

}

#endif // MY_ALGORITMS_H
