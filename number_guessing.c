// homework 2 Guess my number Game

#include <stdio.h>

int main(void){

int number;
int range_start = 1;
int range_end = 1000;
int guess;
int answer;

printf("Welcome!\n\n");
printf("Enter a number between 1 and 1000: ");
scanf("%d",&number);

do
{
  printf("Is your number greater than %d?(yes=1,no=0): ",guess);
  scanf("%d",&answer);
  
  guess = ((range_end - range_start)/2)+range_start;
  
  if (answer == 1)
    {
	range_start	= guess;
	}
  else if (answer == 0)
    {
	range_end = guess;
	}
  else if (guess == number)
    {
	printf("I've got it, your number is %d!",guess);
	} 
} while (guess != number);
}