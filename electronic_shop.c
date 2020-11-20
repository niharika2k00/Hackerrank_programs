
// https://www.hackerrank.com/challenges/electronics-shop/problem

#include <conio.h>
#include <stdio.h>

int main()

{
    int i, j, store = -1, cost = 0, b, keyboards_count, drives_count, keyboards[10], drives[10];

    printf("enter the 2 array size & the budget amt : ");
    scanf("%d %d %d", &keyboards_count, &drives_count, &b);

    printf("enter the 1st array elements : ");
    for (i = 0; i < keyboards_count; i++)
        scanf("%d", &keyboards[i]);

    printf("enter the 2nd array elements : ");
    for (j = 0; j < drives_count; j++)
        scanf("%d", &drives[i]);

    //  LOGIC BEGINSS -----------
    for (i = 0; i < keyboards_count; i++)
    {
        for (j = 0; j < drives_count; j++)
        {
            cost = keyboards[i] + drives[j];

            if ((cost <= b) && (cost > store))
                store = cost;
        }
    }
    printf("%d is the max price that he can affort to buy the both.", store);
}