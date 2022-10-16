#include "question1.h"
#include "time.h"
#include <cstdlib>

bool test_config()
{
    return true;
}

int roll_die()
{
  /*srand(time(NULL)); normally would call srand here. however, as I am required to use loop to test it, i must call outside of function.*/
  int rand_int = rand() % 6 + 1;
  return rand_int;
}