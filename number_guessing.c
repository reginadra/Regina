// homework 2 Guess my number Game

#include <stdio.h>

int main(void){

int number;
int range_start = 1;
int range_end = 1000;
int guess;
int answer;

printf("Welcome!\n\n");
printf("Think of a number between %d and %d, I will guess it!\n\n",range_start,range_end);

do
{
  guess = ((range_end - range_start)/2)+range_start;	
	
  printf("Is your number greater than %d?(yes=1,no=0): \n",guess);
  scanf("%d",&answer);
  
  if (answer == 1)
    {
	range_start	= guess;
	}
  else if (answer == 0)
    {
	range_end = guess;
	}

} while (range_end-range_start != 1);

return printf("I've got it, your number is %d!",range_end);

}
