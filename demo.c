

#include <stdio.h>

int main()
{
    int a[10], i;
    printf("ENTER THE NO. : \n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
        printf("%d \t", a[i]);
    return 0;
}
