#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char inputSide;
    printf("Heads or Tails? (h/t):");
    scanf("%c",&inputSide);

    srand(time(NULL));
    int actualSide = rand() % 2;

    if (actualSide == 0)
    {
        printf("HEADS!\n");
        if(inputSide == 'h' || inputSide == 'H')
            printf("You win!");
        else
            printf("You lose!");
    }
    else
    {
        printf("TAILS!\n");
         if(inputSide == 't' || inputSide == 'T')
            printf("You win!");
        else
            printf("You lose!");
    }

    return 0;
}
