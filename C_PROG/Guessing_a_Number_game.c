#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to guessing number game : \n");
    random =rand()%100+1;
    //printf("The random number is %d",random);

    do{
        printf("Please enter your number : ");
        scanf("%d",&guess);
        no_of_guess++;

    if(guess < random)
    {
        printf("Guess a larger number.\n");
    }
    else if (guess>random)
    {
        printf("Guess a smaller number.\n");

    }
    else
    {
        printf("Congratilations!!! You have successully gassd the number in %d attempts", no_of_guess);
    }
    }
    while (guess!=random);
    printf("\n Bye Bye ,Thanks or playing this game.");
    printf("\n Developed by : Dar Ishfaq");

}

