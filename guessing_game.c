#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{
  int randon,guess;
  int no_of_guess=0;
  srand(time(NULL));
 
  printf("Welcome to the world of Guessing Number\n");
  randon = rand() %100 + 1;//Generating between 0 to 100
  //printf("randon number is :%d",randon);

  
do{
  printf("Please enter your Guess between(1 to 100):");
  scanf("%d",&guess);
  no_of_guess++;

  if(guess < randon){
    printf("Guess a larger number. \n");

  }else if(guess > randon){
    printf("Guess a smallar number.\n ");

  }else{
    printf("Congratuulations !!! You have successfully guessed the Number in %d attemps,",no_of_guess);
  }
 
 } while(guess != randon);
 printf("\n Bye Bye, Thanks for playing.");
 printf("\n Developed by : Chirag singh");

  return 0;
}