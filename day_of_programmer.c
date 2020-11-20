
// LINKS : https://www.hackerrank.com/challenges/day-of-the-programmer/problem

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int year;
    char  str_year[10];
    scanf("%d", &year);

    if (year < 1918)
    {
        if (year % 4)
        {
            itoa(year, str_year, 10);
            char s[10] = "13.09.";
            strcat(s, str_year);
            // return s;
            printf("%s", s);
        }
        else
        {
            printf("12.09.%4d\n", year);
        }
    }
    else if (year == 1918)
    {
        printf("26.09.1918\n");
    }
    else
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100))
        {
            printf("12.09.%4d\n", year);
        }
        else
        {
            printf("13.09.%4d\n", year);
        }
    }
}