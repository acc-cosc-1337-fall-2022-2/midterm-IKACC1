#include "question1.h"
#include <iostream>
#include <time.h>
int main()
{
/* must call srand in main because instructions say to test with loop. Calling inside roll_die would cause the same numbers to be displayed repeatedly*/
srand(time(NULL));
char user_choice;
LOOP: std::cout<<"If you wish to roll the die, Input (Capital) Y\n";
std::cin>>user_choice;
if (user_choice=='Y')// I considered making it also accept 'y', but the instructions only said 'Y'. 
    {
    int dice_roll = roll_die();
    std::cout<<"\n"<<dice_roll<<"\n";
    goto LOOP;
    }
return 0;
}
