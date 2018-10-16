#ifndef PRINT_H
#define PRINT_H
#include <iostream>
void print_hand ()
{
for (int i = 1; i< 10; i++)
{
if(hand[i] == 0)
{
size = i-1;
//cout« size « " - size"« endl;
break;
}
std::cout << (char)deck[0][hand[i]]<< " ";
}
std::cout << std::endl;
}



#endif // PRINT_H
