

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, count = 0, j, pair = 0, a, n, ar[10];
    printf("enter the size of array n : ");
    scanf("%d", &n);
    printf("enter the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for (i = 0; i < n; i++)
    {
        count = 1;
        if (ar[i] != 0) // bcz the index places where 0 is stored are the reapeated elements,which has already been calculated previously.
        {

            for (j = i + 1; j < n; j++)
            {
                if (ar[i] == ar[j])
                {
                    count++;
                    ar[j] = 0;
                }
            }
            a = count / 2;
            pair = pair + a;
        }
    }

    printf("%d", pair);
}