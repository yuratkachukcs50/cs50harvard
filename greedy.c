#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollar;
    int r = 0;
    int k = 0;
    do
    {
        printf("O hai! How much change is owed?\n");
        dollar = GetFloat();
    }
    while (dollar < 0);
    r = round(dollar * 100);
    while (r >= 25)
    {
        k++;
        r = r - 25;
    }
    while (r >= 10)
    {
        k++;
        r = r - 10;
    }
    while (r >= 5)
    {
        k++;
        r = r - 5;
    }
    while (r >= 1)
    {
        k++;
        r = r - 1;
    }
    printf("%i\n", k);
}
