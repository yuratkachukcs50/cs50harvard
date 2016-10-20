#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes ");
    int minutes = get_int();
    
    int x = minutes * 12;
    
    printf("bottles %i\n",x);
}
