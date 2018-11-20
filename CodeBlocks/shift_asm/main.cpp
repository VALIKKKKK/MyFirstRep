#include <iostream>
#include "asm.h"
struct Value
{
    int arr[8];
    int cf = 0;
    Value(std::initializer_list<int> l)
    {
        int* temp = arr;
        for(auto i = l.begin(); i != l.end(); ++i)
        {
            *temp++ = *i;
        }

    }
    void print()
    {
        print_bits_num();
        print_line();
        for(int i = 0; i < 8; ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << " " << cf << std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
    }
    void shr()
    {
        cf = arr[0];
        for(int i = 0; i < 8; ++i)
        {
            arr[i] = arr[i + 1];
        }
        arr[7] = 0;
    }
    void sar()
    {
        int temp = arr[7];
        shr();
        arr[7] = temp;
    }
    void shl()
    {
        cf = arr[7];
        for(int i = 8; i > -1; --i)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = 0;
    }
    void sal()
    {
        shl();
    }
};
int main()
{
    Value a = {1,2,3,4,5,6,7,8};
    a.print();
    a.shr();
    a.print();
    a.shr();
    a.print();
    return 0;
}
