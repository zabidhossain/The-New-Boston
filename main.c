#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int i, diceroll, x = 0, y = 0, j=0, k = 0;
    char begin, G, L, S, guess;


    printf("Welcome To the Dice roll game \n");
    printf("Enter B to begin :  ");
    scanf("%c", &begin);
    begin = toupper(begin);

    if ( begin == 'B'){

        for (i = 0; i < 10; i++){
            diceroll =  ( rand()%6 ) + 1;
            printf("\t dice no. %d, dice value = %d\n", j, diceroll );
            x = x + diceroll;
            j++;
        }

        printf("\nSum of 10 diceroll is : %d\n", x);
        printf("\nNow guess the next result \n");
        printf("Press G for greater, L for lesser, S for same : ");
        scanf(" %c", &guess);
        printf("\n");
        guess = toupper(guess);

        for (i = 0; i < 10; i++){
            diceroll = ( rand()%6 ) + 1;
            printf("\t dice no. %d, dice value = %d\n", k, diceroll );
            y = y + diceroll;
            k++;
        }

        printf("\nThe new sum is : %d\n", y);


        switch (guess){

             case 'G' : if (y > x){
                            printf("You are right \n");
                        } else {
                            printf("you are wrong\n");
                        }

                        break;


             case 'L' : if (y < x){
                            printf("You are right \n;");
                        } else {
                            printf("you are wrong\n");
                        }

                        break;


             case 'S' : if (y == x){
                            printf("You are right \n;");
                        } else {
                            printf("you are wrong\n");
                        }

                        break;


        }


    } else {

        printf("Please press B and try again\n");

    }





    return 0;
}
