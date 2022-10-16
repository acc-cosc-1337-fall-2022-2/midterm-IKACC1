#include "question2.h"

bool test_config()
{
    return true;
}


int get_earned_points(int sold)
{
    int points_earned;
    if (sold >=1 && sold <=5)
        {
        points_earned=sold;
        return points_earned;
        }
    else if (sold >=6 && sold <=10)
        {
        points_earned=sold*5;
        return points_earned;
        }
    else if (sold >=11 && sold <=15)
        {
        points_earned=sold*10;
        return points_earned;
        }
    else if (sold >=16)
                {
        points_earned=sold*15;
        return points_earned;
        }

}