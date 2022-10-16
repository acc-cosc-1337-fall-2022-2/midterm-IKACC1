#include "question2.h"
#include <iostream>

int main()
{
// recieve inputs as double and convert to int on function call--if they entered a double to an int, the part after decimal would mess up buffer.
double number_sold;
LOOP: std::cout<<"\nPlease Type Number of Widgets Sold\n";
std::cin>>number_sold;
double continue_check;
if (number_sold<=0)
    {
    //validation, informs user that number must be greater than 0(the table provided did not include the points to return for 0. thus it is considered bad input)
    std::cout<<"\nPlease Enter a Number Greater Than 0 to Calculate Points\n";    
    goto LOOP;
    }
int points_earned = get_earned_points(number_sold);
std::cout<<"Points Earned "<<points_earned;
std::cout<<"\nDo You Want to Continue? If So, Enter 1. Else, Enter Another Value\n";
std::cin>> continue_check;
    if (continue_check ==1)
        goto LOOP;

return 0;
}