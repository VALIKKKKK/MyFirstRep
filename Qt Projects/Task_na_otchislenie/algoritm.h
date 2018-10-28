#ifndef ALGORITM_H
#define ALGORITM_H
#include <iostream>
#include <strings.h>
void f3(const char* src, char* dest)
{
     int* arr = count_laters(src);
     while(*src!=0)
     {
         if(!is_exesist_n_times(arr,*src,1))
         {
              *dest = *src;
             ++dest;
         }
        // std::cout << *src << " " << is_exesist_n_times(arr,*src,1) << std::endl;
        ++src;
     }
     *dest = 0;
     delete[] arr;
}
void f4(const char* src, char* dest)
{
     int* arr = count_laters(src);
     while(*src!=0)
     {
         if(is_exesist_n_times(arr,*src,1))
         {
              *dest = *src;
             ++dest;
         }
        // std::cout << *src << " " << is_exesist_n_times(arr,*src,1) << std::endl;
        ++src;
     }
     *dest = 0;
     delete[] arr;
}
void f5(const char* src, char* dest)
{
     int* arr = count_laters(src);
     while(*src!=0)
     {
         if(!is_exesist_n_times(arr,*src,2))
         {
              *dest = *src;
             ++dest;
         }
        // std::cout << *src << " " << is_exesist_n_times(arr,*src,1) << std::endl;
        ++src;
     }
     *dest = 0;
     delete[] arr;
}
void f6(const char* src, char* dest)
{
     int* arr = count_laters(src);
     while(*src!=0)
     {
         if(is_exesist_n_times(arr,*src,2))
         {
              *dest = *src;
             ++dest;
         }
        // std::cout << *src << " " << is_exesist_n_times(arr,*src,1) << std::endl;
        ++src;
     }
     *dest = 0;
     delete[] arr;
}
int f7(const char* str)
{
    int arr[127] {0};
    int max_counter = 0;
    char s = 0;
    int counter = 0;
    for(; *str != 0; ++str)
    {
        if(*str == *(str + 1))
        {
            ++counter;
        }
        else
        {
            if(counter > max_counter)
            {
                max_counter = counter;
                s = *str;
            }
            counter = 0;
        }
    }
    return max_counter;
}
void f8(const char* str)
{
    int arr[127] {0};
    for(; *str != 0; ++str)
    {
        ++arr[*str];
    }
    for(int i = 0; i < 128; ++i)
    {
        //std::cout << (char)i << " " <<arr[i] << std::endl;
    }
}

char count(char* src)
{
    char c;
    int temp;
    int i = 0;
    for(;*src!=0;++src)
    {
        for(;*src!=0;++src)
        {
std::cout << *src << std::endl;
            if(*src == src[i])
            {

                c=*src;
                ++temp;
            }
            ++i;
        }
        if(temp==1)
        {
            std::cout << "c" << std::endl;
            return c;
        }
    }

}
#endif // ALGORITM_H
