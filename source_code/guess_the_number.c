// guess the number game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_number = rand() % 10 + 1;
    int guess_number;
    int guess_count = 0;
    printf("Guess the number between 1 and 10\n");
    while(1)
    {
        printf("Enter your guess number : ");
        scanf("%d",&guess_number);
        if(guess_number == random_number)
        {
            printf("You guessed the number correctly\n");
            break;
        }
        else
        {
            if(guess_number > random_number)
            {
                printf("Your guess number is greater than the random number\n");
            }
            else
            {
                printf("Your guess number is less than the random number\n");
            }
            guess_count++;
        }
    }
    printf("You guessed the number in %d guesses\n",guess_count+1);

    return 0;
}
