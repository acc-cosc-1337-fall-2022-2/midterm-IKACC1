#include <iostream>
#include <string>
#include "question4.h"
int main()
{
int loop_flag =0;
do
{
std::cout<<"Please Enter a String\n";
std::string user_string;
std::cin>>user_string;
bool is_palindrome_result= is_palindrome(user_string);
if (is_palindrome_result==true)
    std::cout<<"\ntrue\n";
else
{
    std::cout<<"\nfalse\n";
}

std::cout<<"\nDo You want to Exit? If So, Input 2 and Press Enter. If Not, Enter Any Other Number\n";
double user_choice; 
std::cin>>user_choice;
std::cin.clear();// if user input is bad, this allows cin to keep accepting values.
if (user_choice==2)
    loop_flag=1;
}
while(loop_flag==0);
    return 0;
}