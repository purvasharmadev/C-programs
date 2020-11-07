#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;
    printf("Welcome to GuessTheNum!!!\n");
    printf("Your clue is:\na number comes before and after a digit divided by 2!!\n");
    while(guess != secretNum && outOfGuess == 0)
    {
        if(guessCount<guessLimit)
        {
            printf("Enter a number\n");
            scanf("%d",&guess);
            guessCount++;

        }
        else{
            outOfGuess = 1;
            }
    }
    if(outOfGuess == 1)
        {
            printf("Opps!! out of guesses!");

        }
    else{
        printf("Oh!! you got it!");

        }

    return 0;
}
