#include<stdio.h>
#include<stdlib.h>

#define MIN 100
#define MAX 100000

int random(int max);

void main()
{
  for (int i = 0; i <= 100; i++)
  {
    int num = random(50); 
    printf("%d\n", num);  
  }
}

int random(int max)
{
  int i, n;
  time_t t;
  
  n = 5;
  
  /* Intializes random number generator */
  srand((unsigned) time(&t));

  /* Print 5 random numbers from 0 to 50 */
  for( i = 0 ; i < n ; i++ ) {
    printf("%d\n", rand() % max);
  }
  
  return(0);
}