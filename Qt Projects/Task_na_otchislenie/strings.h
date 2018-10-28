#ifndef STRINGS_H
#define STRINGS_H
#include <iostream>
void strcpy(char* dest,char* src)
{
    for(;*src = *dest;++src,++dest);
}
template <typename UnaryPredicate>
void strcpy_if(char* dest,char* src, UnaryPredicate p)
{
    while(*src!=0)
    {
        if(!p(*src))
        {
             *dest = *src;
            ++dest;
        }
       ++src;
    }
    *dest = 0;
}
int* count_laters(const char* src)
{
    int* arr = new int[128]{0};

    for(;*src;++src)
    {
        ++arr[*src];

    }
    for(int i = 30;i<128;++i)
    {
        //std::cout << (char)i << " " <<arr[i] << std::endl;
    }
    return arr;
}
bool is_exesist_n_times(int* arr,char c, int times)
{
    return arr[c]==times;
}

#endif // STRINGS_H
