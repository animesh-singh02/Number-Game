#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int calculator()
{
    printf("   BASIC CALCULATOR TO CALCULATE OPERATIONS BETWEEN TWO NUMBERS\n");
    printf("Enter no. 1 \n");
    float a;
    scanf("%f", &a);
    printf("Enter no. 2 \n");
    float b;
    scanf("%f", &b);

    printf("Enter the operation you want to perform from the following +,-,*,/ \n");
    char oper;
    scanf(" %c", &oper);

    if (oper == '+')
    {
        printf("%.1f + %.1f = %.3f \n", a, b, a + b);
    }
    else if (oper == '-')
    {
        printf("%.1f - %.1f = %.3f \n", a, b, a - b);
    }
    else if (oper == '*')
    {
        printf("%.1f * %.1f = %.3f \n", a, b, a * b);
    }
    else if (oper == '/')
    {
        printf("%.1f / %.1f = %.3f \n", a, b, a / b);
    }
    else
    {
        printf("Invalid operation \n");
    }
}
int pattern()
{
    printf("           PATTERN PRINTING          \n");
    printf("\n1.Right angled Triangle \n");
    printf("2.Equilteral Triangle \n");
    printf("3.Square \n");
    printf("4.Rectangle \n");
    printf("\n     which would you choose \n");
    int user;
    scanf("%d", &user);
    printf("\n");
    if (user == 1)
    {
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (user == 2)
    {
        for (int i = 1; i < 7; i++)
        {
            for (int j = 6 - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }

            printf("\n");
        }
    }
    else if (user == 3)
    {
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                printf("*  ");
            }
            printf("\n");
        }
    }
    else if (user == 4)
    {
        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 9; j++)
            {
                printf("*  ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("  INVALID CHOICE  \n");
    }
}
int wordcount()
{

    char text[10000];
    printf("  THIS PROGRAMME CALULATES THE NO. OF WORDS  \n\n");
    printf("ENTER YOUR TEXT \n");
    
    gets(text);

    int n = strlen(text);
    int count = 1;
    int exception = 0;

    for (int i = 0; i < n; i++)
    {
        if (text[0] == ' ' || text[n - 1] == ' ')
        {
            exception = 1;
        }
        else if (text[i] == ' ')
        {
            exception = 0;
            count++;
        }
        else if (text[i] != ' ')
        {
            exception = 2;
            count;
        }
    }
    printf("\n");
    if (n > 10000)
    {
        printf("ERROR  : You crossed the limit of alphabets \n");
    }
    else if (exception == 1)
    {
        printf("ERROR  : You cannot make space at the starting or ending position of the sentence \n");
    }
    else if (exception == 0)
    {
        printf(" No. of words in your text is %d", count);
    }
    else if (exception == 2)
    {
        printf(" No. of words in your text is %d", count);
    }
}
int numberguess()
{
    printf("        GUESS THE NUMBER \n\n");
    printf("        Choose Difficulty\n");
    printf("1. Easy \n3. Medium \n3.Hard\n\n");
    int diff;
    scanf("%d", &diff);

    if (diff == 1)
    {
        srand(time(0));
        int num1 = rand() % 50 + 1;

        for (int i = 1; i < 50; i++)
        {
            printf("Guess the number\n");
            int user;
            scanf("%d", &user);
            if (user < 0 && user > 50)
            {
                printf("INVALID GUESS");
            }
            else if (user > num1)
            {
                printf("Lower your number\n\n");
            }
            else if (user < num1)
            {
                printf("Higher your number\n\n");
            }
            else if (user == num1)
            {
                printf("Correct Guess\n");
                printf("Total no. of attempts %d \n", i);
                break;
            }
            else
            {
                printf("ERROR : Please enter a number");
            }
        }
    }
    else if (diff == 2)
    {
        srand(time(0));
        int num2 = rand() % 150 + 1;

        for (int i = 1; i < 150; i++)
        {
            printf("Guess the number\n");
            int user;
            scanf("%d", &user);
            if (user < 0 && user > 150)
            {
                printf("INVALID GUESS \n");
            }

            else if (user > num2)
            {
                printf("Lower your number\n\n");
            }
            else if (user < num2)
            {
                printf("Higher your number\n\n");
            }
            else if (user == num2)
            {
                printf("Correct Guess\n");
                printf("Total no. of attempts %d \n", i);
                break;
            }
            else
            {
                printf("ERROR : Please enter a number");
            }
        }
    }
    else if (diff == 3)
    {
        srand(time(0));
        int num3 = rand() % 300 + 1;

        for (int i = 1; i < 150; i++)
        {
            printf("Guess the number\n");
            int user;
            scanf("%d", &user);
            if (user < 0 && user > 300)
            {
                printf("INVALID GUESS \n");
            }
            else if (user > num3)
            {
                printf("Lower your number\n");
            }
            else if (user < num3)
            {
                printf("Higher your number\n");
            }
            else if (user == num3)
            {
                printf("Correct Guess\n");
                printf("Total no. of attempts %d \n", i);
                break;
            }
            else
            {
                printf("ERROR : Please enter a number");
            }
        }
    }
    else
    {
        printf("INVALID CHOICE \n");
    }
}
int main()
{
menu:
    printf("             M E N U\n");
    printf("1.Basic Calculator\n");
    printf("2.Counting Words\n");
    printf("3.Pattern Printing\n");
    printf("4.Guess The Number\n");
    printf("Choose one of the following\n");
    int menu;
    scanf("%d", &menu);
    printf("\n");
    switch (menu)
    {
    case 1:
        calculator();
again1:
        printf("\nWhat do you want\n");
        printf("1.go to menu\n2.exit\n");
        int decide;
        scanf("%d", &decide);
        if (decide == 1)
        {
            goto menu;
        }
        else if (decide == 2)
        {
            goto exit;
        }
        else
        {
            printf("INVALID CHOICE\n");
            goto again1;
        }

        break;
    case 2:
        wordcount();
again2:
        printf("\nWhat do you want\n");
        printf("1.go to menu\n2.exit\n");
        int decide2;
        scanf("%d", &decide2);
        if (decide2 == 1)
        {
            goto menu;
        }
        else if (decide2 == 2)
        {
            goto exit;
        }
        else
        {
            printf("INVALID CHOICE\n");
            goto again2;
        }
        break;
    case 3:
        pattern();
    again3:
        printf("\nWhat do you want\n");
        printf("1.go to menu\n2.exit\n");
        int decide3;
        scanf("%d", &decide3);
        if (decide3 == 1)
        {
            goto menu;
        }
        else if (decide3 == 2)
        {
            goto exit;
        }
        else
        {
            printf("INVALID CHOICE\n");
            goto again3;
        }
        break;
    case 4:
        numberguess();
    again4:
        printf("\nWhat do you want\n");
        printf("1.go to menu\n2.exit\n");
        int decide4;
        scanf("%d", &decide4);
        if (decide4 == 1)
        {
            goto menu;
        }
        else if (decide4 == 2)
        {
            goto exit;
        }
        else
        {
            printf("INVALID CHOICE\n");
            goto again4;
        }
        break;
    exit:
        return 0;
    }
}
