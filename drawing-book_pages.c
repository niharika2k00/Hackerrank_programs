
// https://www.hackerrank.com/challenges/drawing-book/problem

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    scanf("%d", &n); //total no. of pages
    int p;
    scanf("%d", &p); // the [age that needs to be searched
    int front, back;
    front = p / 2;
    back = (n - p) / 2;
    if (front > back)
        printf("%d", back);

    else
        printf("%d", front);
}