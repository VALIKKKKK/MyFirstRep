#ifndef ASM_H_INCLUDED
#define ASM_H_INCLUDED
void print_line()
{
     for(int i = 0; i < 16; ++i)
        {
            std::cout << "-";
        }
        std::cout<<std::endl;
}
void print_bits_num()
{
    for(int i = 0; i < 8; ++i)
        {
            std::cout << i << " ";
        }
        std::cout << " cf "<< std::endl;
        std::cout<<std::endl;
}

#endif // ASM_H_INCLUDED
