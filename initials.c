#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string k = get_string();
    int s = 0;
    while (k[s] == ' ')
    {
        s++;
    }
    
    printf("%c", toupper(k[s]));
    
    for (int i = s, n = strlen(k); i < n; i++)
    {
        while (k[i] == ' ')
        {
            i++;
            if (i < n && k[i] != ' ')
            {
                printf("%c", toupper(k[i]));
            }
        }   
    }
    printf("\n");
    
}
