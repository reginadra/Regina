// homework 2 Guess my number Game

#include <stdio.h>

int main(void){

int number;
int range_start = 1;
int range_end = 1000;
int guess;
int answer;

printf("Welcome!\n\n");
printf("Enter a number between 1 and 1000: \n");
scanf("%d",&number);

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
  /*else if (guess == number)
    {
	printf("I've got it, your number is %d!",guess);
	} */
} while (guess != number);

return printf("I've got it, your number is %d!",guess);

}