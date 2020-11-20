

/* LINKS :  OF HACKER RANK PROBLEM ------> 
  https://www.hackerrank.com/challenges/migratory-birds/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen */

#include <conio.h>
#include <stdlib.h>

int main()
{
    int compare(const void *a, const void *b)
    {
        return *(int *)a - *(int *)b;
    }

    // Complete the migratoryBirds function below.
    int migratoryBirds(int arr_count, int *arr)
    {

        qsort(arr, arr_count, sizeof(int), compare);

        int i, max = 0, maxbird, current = arr[0], count = 1;

        for (i = 1; i < arr_count; i++)
        {
            if (arr[i] == current)
            {
                count++;
                if (count > max)
                {
                    max = count;
                    maxbird = arr[i];
                }
            }
            else
            {
                current = arr[i];
                count = 1;
            }
        }

        return maxbird;
    }
}