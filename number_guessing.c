// homework 2 Guess my number Game

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){

int number = 0;
int range_start = 1;
int range_end = 1000;
int guess;
int answer;

printf("Welcome!\n\n");
printf("Enter a number between 1 and 1000: ");
scanf("%d",&number);

guess = ((range_end - range_start)/2)+range_start;

do
{
  printf("Is your number greater than %d?(1,0): ",guess);
  scanf("%d ",&answer);
  
  if (answer == 1)
    {
	range_start	= guess;
	guess = ((range_end - range_start)/2)+range_start;
	}
  else if (answer == 0)
    {
	range_end = guess;
	guess = ((range_end - range_start)/2)+range_start;
	}
  else if (guess == number)
    {
	printf("Your number is %d",guess);
	} 
} while (guess != number);
}