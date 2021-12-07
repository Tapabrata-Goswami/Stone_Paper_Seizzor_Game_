 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int value (char you, char computer);

int main(){





    printf("\n\n###########################################\n");
    printf("#                                         #\n");
    printf("#        STONE    PAPER   SCISSORS        #\n");
    printf("#                                         #\n");
    printf("###########################################\n\n");

    printf("#################  Game Rule  #####################\n");
    printf("#                                                 #\n");
    printf("# How to choose --------> Stone, Paper, Scissors  #\n");
    printf("# S ---> Stone || P ---> Paper || E ---> Scissors #\n");
    printf("#                                                 #\n");
    printf("###################################################\n\n");

    // return 1 ---> you Win / return 0 ---> Draw / return -1 ---> you lose

    // char name[40];
    // printf("What is your Name\n-->> ");
    // scanf("%c", &name);


    char you;
    char computer;

    srand(time(0));
    computer = rand()%10+1;

    if(computer<= 3){
        computer = 'S';

    }else if (computer>=4 && computer<=6)
    {
        computer = 'P';
    }else{
        computer = 'E';
    }


    printf("# Your Turns, Choose ---> STONE(S) || PAPER(P) || SCISSORS(E). \n\n-->>");
    scanf("%c", &you);

    int resultes = value( you, computer);

    if (resultes==0)
    {
        printf("-->> DRAW !\n");
    }else if (resultes==1)
    {
        printf("-->> YOU WIN !\n");
    }else if (resultes==(-1))
    {
        printf("-->> YOU LOSE ! BETTER LUCK NEXT TIME\n");
    }



// int i;
// do
//   {

//     printf("-->> YOU LOSE ! BETTER LUCK NEXT TIME\n -->");
//     scanf("%d", &i);
//     } while (i == 2);

    return 0;
}




int value (char you, char computer){

    // For draw action -- > R R / SE SE / P P

    if(you==computer){
        return 0;
    }

    // For draw action -- > S P | P S /  / P P

    if (you=='S' && computer == 'P')
    {
        return -1;
    }
    else if (you == 'P' && computer == 'E')
    {
        return -1;
    }
    else if (you == 'E' && computer == 'S')
    {
        return -1;
    }

    if (you=='E' && computer == 'P')
    {
        return 1;
    }
    else if (you == 'P' && computer == 'S')
    {
        return 1;
    }
    else if (you == 'S' && computer == 'E')
    {
        return 1;
    }

}
