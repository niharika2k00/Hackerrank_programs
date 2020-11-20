
/* 
          LINKS :   https://www.hackerrank.com/challenges/the-birthday-bar/problem?h_r=next-challenge&h_v=zen

Given a chocolate bar, two children, Lily and Ron, are determining how to share it. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
You must determine how many ways she can divide the chocolate. */

#include <conio.h>

int main()
{
    int i, j, c = 0, sum = 0, m, d, n;
    int a[10];

    printf("enter the size of the array , d & m(length) : ");
    scanf("%d %d %d", &n, &d, &m);

    printf("enter the array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum = sum + a[i + j];
        }
        if (sum == d)
            c++;
        sum = 0;
    }
    printf("%d", c);
}