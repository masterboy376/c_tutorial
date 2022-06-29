#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// rock, paper, scissors

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    int t;
    printf("Enter the number of turns in the game ");
    scanf("%d", &t);
    register int p1 = 0, p2 = 0;
    for (int i = 0; i<t; i++)
    {
        int userChoice, computerChoice = generateRandomNumber(3);
        printf("computer choose %d\n",computerChoice);
        printf("Please choose your option\n 0. Rock\n 1. Paper\n 2.sissors\n");
        scanf("%d", &userChoice);
        if ((userChoice == 0 && computerChoice == 2) || (userChoice == 2 && computerChoice == 1) || (userChoice == 1 && computerChoice == 0))
        {
            printf("You won round %d\n", i++);
            p1++;
        }
        else if ((userChoice == 2 && computerChoice == 0) || (userChoice == 1 && computerChoice == 2) || (userChoice == 0 && computerChoice == 1))
        {
            printf("Computer won round %d\n", i++);
            p2++;
        }
        else
        {
            printf("Draw round %d\n", i++);
        }
    }
    if (p1 > p2)
    {
        printf("You won!\n");
        p1++;
    }
    else if (p1 < p2)
    {
        printf("Computer won!\n");
        p2++;
    }
    else
    {
        printf("Game draw!\n");
    }

    return 0;
}