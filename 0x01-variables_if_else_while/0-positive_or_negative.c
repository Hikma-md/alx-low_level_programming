#include <stdlib.h>
#includ <time.h>
#include <stdio.h>
/* 
*a code that differentiate whether positive or not
*/
int main(void)
{
  int n;
  strand(time(0));
  n=rand()-RAND_MAX / 2;
  if (n > 0)
  {
  printf("%d is positive\n", n);
  }
  else if (n==0)
  { 
  printf(%d is zero\n", n);
  }
  else
  {
  printf(%d is negative\n", n);
  }
