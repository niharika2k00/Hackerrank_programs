
// LINK : https://www.hackerrank.com/challenges/the-hurdle-race/problem

#include <conio.h>
#include <stdio.h>

int main()
{
    int height[10] = {1, 6, 3, 5, 2};
    int diff, max = height[0], i, k;

    scanf("%d", &k); // k inputing
    for (i = 1; i < 5; i++)
    {
        if (max < height[i])
            max = height[i];
    }

    if (max >= k)
    {
        diff = max - k;
        // return k;
        printf("%d",diff);
    }

    else
        printf("0");
}