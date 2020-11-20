
// LINKS : https://www.hackerrank.com/challenges/pangrams/problem

#include <stdio.h>

int main()
{
    char s[100];
    scanf("%[^\n]", s);

    int i, j, flag;

    for (j = 'a'; j <= 'z'; j++)
    {
        flag = 0;
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != 32) // eliminates the string
            {
                if ((j == s[i]) || ((j - 32) == s[i]))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0) //in entire string ‘a’ is not present
            break;
    }

    if (flag == 0)
        printf("not pangram");

    printf("pangram");
}