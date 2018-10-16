#include <QCoreApplication>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct black_jack
{
int deck[2][14] = {{0,'A','2','3','4','5','6','7','8','9','T','J','Q','K'},
{0,11,2,3,4,5,6,7,8,9,10,10,10,10}
};
int hand[10] {0,0,0,0,0,0,0,0,0,0};
int size;
bool game = true;
bool ready = true;
void take()
{
int card = 1 + rand() % 12;
while(1)
{
int temp = 0;
for (int i = 1; i< 10; i++)
{
if(hand[i] == card)
{
temp++;
}
}
if (temp < 4)
{
break;
};
}
for (int i = 1; i< 10; i++)
{
if(hand[i] == 0)
{
hand[i] = card;
break;
}
}
};
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
cout << (char)deck[0][hand[i]]<< " ";
}
cout << endl;
}
int cal ()
{
int ace = 0;
int sum = 0;
for (int i = 1; i<= size; i++)
{
if(hand[i] == 1)
{
ace++;
if (size == 2 && deck[1][hand[size - i +1]] == 10)
{
auto_win();
break;
}
continue;
}
sum += deck[1][hand[i]];
}
if (ace)
{
if (ace + sum >= 21)
{
sum = ace + sum;
}else
if (11 + ace - 1 + sum <= 21)
{
sum = 11 + ace - 1 + sum;
}else{sum = ace + sum;};
}
if(sum > 21){game = false;};
return sum;
}
void input_command()
{
char text;
cin >> text;
if (text == 't'){text = 'T';};
if (text == 's'){text = 'S';};
switch (text)
{
case 'T':
take();
break;
case 'S':
game = false;
ready = true;
break;
default:
help_4_autists();
input_command();
break;
}
}
void help_4_autists()
{
cout << "##########INFO##########"<<endl;
cout << "T - Get a fucking card" << endl;
cout << "S - Ready to open" << endl;
cout << "########################" << endl;
}
void get_adress()
{
cout << &hand[1]<<endl;
}
void auto_win()
{
game = false;
cout << "Congratulations today, luck is on your side, now go rob another casino"<< endl;
}
};
int main(int argc, char *argv[])
{
srand(time(nullptr));
black_jack game;
game.print_hand();
while(game.game)
{
game.input_command();
game.print_hand();
cout<< "Ur Score is - " << game.cal()<<endl;
//game.get_adress();
}
if (game.cal()>21){cout << "HA-Ha u lose"<< endl;};
return 0;
}
