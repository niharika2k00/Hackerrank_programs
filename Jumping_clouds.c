// LINKS :: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20], i = 0, jumps = 0, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    i = 0;
    while (i < n - 1)
    {
        if (a[i + 2] == 0)
        {
            jumps++;
            i += 2;
        }
        else if (a[i + 1] == 0)
        {
            jumps++;
            i += 1;
        }
    }
    printf("\n%d", jumps);
}