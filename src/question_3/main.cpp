#include <vector>
#include <iostream>
#include "question3.h"
int main()
{
LOOP: std::cout<<"Please Enter the Number of Cookies Required\n";
double cookies_to_bake= 0;//take input as double. anything after decimal will mess up buffer if int used.
std::cin>>cookies_to_bake;
if (cookies_to_bake<0)
    {
    std::cout<<"\nPlease enter a Number of Cookies of at Least 0 For Calculation\n";
    goto LOOP;
    }

std::vector <double> result= get_cookie_ingredients(cookies_to_bake);
int counter=0;
for (auto c: result)
    {switch(counter)
    {
        case 0: 
        {std::cout<<"\nCups of Sugar ";
        break;}
        case 1: 
        {std::cout<<"\nCups of Butter ";
        break;}
        case 2: 
        {std::cout<<"\nCups of Flour ";
        break;}
    }
    std::cout<<c<<"\n";
    counter++;
    }

std::cout<<"\nWould you like to quit? If so press 2. Otherwise, Enter Any Other Number\n";
double user_choice;
std::cin>>user_choice;
if (user_choice !=2)
    goto LOOP;
return 0;
}