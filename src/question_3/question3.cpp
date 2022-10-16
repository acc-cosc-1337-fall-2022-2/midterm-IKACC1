#include "question3.h"
#include <iostream>
bool test_config()
{
    return true;
}

std::vector<double> get_cookie_ingredients (int cookies_to_bake)
{   
    double amount_of_sugar=1.5;
    double amount_of_butter=1;
    double amount_of_flour=2.75;
    int amount_of_cookies_standard= 48;
    double cookies_to_bake2=cookies_to_bake;
    double multiplier;
    if (cookies_to_bake2==0)
        multiplier =0.0;
    else if (amount_of_cookies_standard> cookies_to_bake2)
        multiplier = cookies_to_bake2/amount_of_cookies_standard;
    else if (amount_of_cookies_standard<cookies_to_bake2)
        multiplier = cookies_to_bake2/amount_of_cookies_standard;
    else if (amount_of_cookies_standard==cookies_to_bake2)
        multiplier=1;
    std::vector <double> vector_1{amount_of_sugar,
    amount_of_butter, amount_of_flour};
    int vector_1_size=vector_1.size();
    for (int x=0; x<= (vector_1_size-1); x++)
        {vector_1[x]= multiplier*vector_1[x];}
    return vector_1;
}