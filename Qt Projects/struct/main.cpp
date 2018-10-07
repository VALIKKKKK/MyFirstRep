#include <QCoreApplication>
#include <iostream>
namespace valik {
unsigned int strlen(const char* str)
{
    unsigned int i = 0;
    for(; str[i]; ++i);
    return i;
}
void strcpy_(char dest[],const char* src)
{
    for(; *dest++ = *src++;)
    {
        std::cout << *dest;
    }
   std::cout << std::endl;
}
void strncpy(char* dest, char* src, int n)
{
    for(;n-- && (*dest++ = *src++););
    *dest = 0;
}

int strcmp(char* right, char* left)
{
    for(int i = 0;right[i]!=0 && left[i]!=0;++i)
    {
        if(left[i]>right[i])
        {
            return -1;
        }
        if(left[i]<right[i])
        {
            return 1;
        }

    }
    return 0;
}
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char str[] = "hi";//дом
    char str1[] = "hello";//дома
   //valik::strcpy_(str1,str);
  std::cout << valik::strcmp(str1,str);
    /*std::cout << str << std::endl;
    std::cout << str1 << std::endl;
      std::cout << valik::strlen(str1) << std::endl;*/
      //std::cout << str1 << std::endl;
    return a.exec();
}
