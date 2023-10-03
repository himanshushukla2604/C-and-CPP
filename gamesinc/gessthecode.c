#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    char NameOfPlayer[14];
    int score = 0;
    int gameover = 0;
    int quentions;
    int state1 = 10;
    int wrongAttempt = 0;
    char optionForGame;
    char highscore;
    char ch;
    printf("*****************************************************************************************************\n");
    int new;
    int i = 0;
    COORD c;
    c.X = 20;
    c.Y = 5;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    // start of game
    printf("The Codeing Game\n");


    c.X = 20;
    c.Y = 6;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);



    // Taking Highscore score from the file.
    FILE *fp;
    fp = fopen("highscore.txt", "r");
    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    while (1)
    {
        ch = fgetc(fp);
        NameOfPlayer[i] = ch;
        if (feof(fp))
            break;
            printf("Highscorrer : %c", ch);
        i = i+1;
    }
    fclose(fp);

    
    c.X = 20;
    c.Y = 7;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
// Ask for new or old user
    printf("Enter 1 for new user\n");
    c.X = 20;
    c.Y = 8;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("Enter 2 for existing user\n");
    scanf("%d", &new);

    // if new user 
    if (new == 1)
    {
        printf("Enter the name : ");
        scanf("%s", &NameOfPlayer);
    }
    printf("*****************************************************************************************************\n");

    // questions round 1
    for (int i = 1; i <= state1; i++)
    {

        // quentions =  i;
        printf("%d. ", i);
        
        switch (i)
        {
        case 1:
            printf("Malloc returns address as\n");
            printf("a. Int.\n");
            printf("b. Integer Pointer.\n");
            printf("c. Charecter Points.\n");
            printf("d. Void pointer.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'd')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            }
            break;

        case 2:
            printf("Which operator have the highest priority\n");
            printf("a. !.\n");
            printf("b. *.\n");
            printf("c. /.\n");
            printf("d. +.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'a')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            }
            break;
        case 3:
            printf("What is the scope of an external variable?\n");
            printf("a. Whole source file in which it is defined.\n");
            printf("b. From the point of declaration to the end of the file in which it is defined.\n");
            printf("c. Any source file in a program.\n");
            printf("d. From the point of declaration to the end of the file being compiled.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'd')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        case 4:
            printf("In the given below statement, what does the /“pf/” indicate?\nint (*pf)();\n");
            printf("a. pf is the pointer.\n");
            printf("b. pf is the pointer of the function that return int .\n");
            printf("c. pf is the functional pointer.\n");
            printf("d. none of the above.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'b')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        case 5:
            printf("Choose the correct order from given below options for the calling function of the code “a = f1(23, 14) * f2(12/4) + f3();”?\n");
            printf("a. f1,f2,f3.\n");
            printf("b. f3,f2,f1.\n");
            printf("c. Order may vary on compiler to compiler.\n");
            printf("d. f2,f3,f1.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'd')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        case 6:
            printf("Which of the following is a logical AND operator?\n");
            printf("a. !.\n");
            printf("b. &&.\n");
            printf("c. ||.\n");
            printf("d. &.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'b')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        case 7:
            printf("What is (void*)0?s\n");
            printf("a. Symbolize Void pointer.\n");
            printf("b. Symbolize both Null and Void pointer.\n");
            printf("c. Symbolize Null pointer.\n");
            printf("d. Many Disply error.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'c')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        case 8:
            printf("if a = 4\nc = --a (a++ + a++)\nthan c = ?\n");
            printf("a. 12.\n");
            printf("b. 11\n");
            printf("c. 14\n");
            printf("d. 13.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'a')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        case 9:
            printf("keyword break can appear only within loop/switch statement\n");
            printf("a. True.\n");
            printf("b. False.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'a')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;

        default:
            printf("Malloc returns address as\n");
            printf("a. Int.\n");
            printf("b. Integer Pointer.\n");
            printf("c. Charecter Points.\n");
            printf("d. Void pointer.\n");
            scanf("%s", &optionForGame);
            if (optionForGame == 'd')
            {
                score = score + 10;
                printf("Well Done!!!\n");
            }
            else
            {
                wrongAttempt++;
            };
            break;
        }

        if (wrongAttempt >= 3)
        {
            printf("You are discolified\n");
            break;
        }
        
    }
    // Entering the highscore inside the file 
    if (score >= 80)
        {
            FILE *f;
            f = fopen("highscore.txt", "w");
            if(fprintf(f,NameOfPlayer) >= 0);
            fclose(f);
            printf("you are colified for the next level of test\n");
        }
    return 0;
}