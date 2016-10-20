#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    int k = atoi(argv[1]);
    
    string s;
    do
    {
        printf ("plaintext: "); 
        s = get_string();
    }
    while (s == NULL);
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                s[i] = ((s[i] - 'A' + k) % 26) + 'A';
            }
            else if (islower(s[i]))
            {
                s[i] = ((s[i] - 'a' + k) % 26) + 'a';
            }
        }
    }
    printf("ciphertext: %s\n", s);
    
    return 0;
}
