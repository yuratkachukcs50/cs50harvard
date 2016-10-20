#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);
    for (int r = n; r > 0; r--)
    {
        int s = r - 1;
        for ( int i = 0; i < s; i++)
        {
            printf(" ");
        }
        int hash = n - r + 1;
        for (int i = 0; i < hash; i++)
        {
            printf("#");
        }
        printf("  ");
        for (int i = 0; i < hash; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}
