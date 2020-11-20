
// LINK : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?h_r=next-challenge&h_v=zen

#include <conio.h>
#include <stdio.h>
#include <string.h>

// #define alpha_len 8

int areafinder(int h_count, int *h, char *word)
{
    int i, j, tallest = -1, val, length, area;

    length = strlen(word);
    for (i = 0; i < word[i] != '\0'; i++)
    {
        if ((word[i] >= 97) && (word[i] <= 122))
            val = word[i] - 97;

        if (h[val] > tallest)
            tallest = h[val];
    }

    area = length * tallest * 1;
    return area;
}

int main()
{
    int alpha_len = 8,i ,areaword;
    int alpha[alpha_len] ;
    char word[10];

    /* printf("enter the size of the alphabet array : ");
    scanf("%d\n", &alpha_len); */

    printf("enter the array elements : ");
    for (i = 0; i < alpha_len; i++)
        scanf("%d", &alpha[i]);

    printf("Enter the word : ");
    scanf("%s", word);

    areaword = areafinder(alpha_len, alpha, word);

    printf("The area of the string is : %d", areaword);
    return 0;
}
