#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])

{
    if (argc != 2)
    {
        printf("Usage: %s k\n", argv[0]);
        return 1;
    }
    int length_k;
    string k = argv[1];
    length_k = strlen(k);
    
    for (int i = 0; i < length_k; i++)
    {
        if (!isalpha(k[i]))
        {
            //Keyword letter A-Z and a-z
            printf("Usage: %s k\n", argv[0]);
            return 1;
        }
    }
    //plaintext message input
    string text;
    printf("plaintext: ");
    text = get_string();
    int position_k = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //read letter key turn into integer
        if (isalpha(text[i]))
        {
            
            int kj;
            if (isupper(k[position_k % length_k]))
            {
                kj = k[position_k % length_k] - 'A';
            }
            else
            {
                kj = k[position_k % length_k] - 'a';
            }
            if (isupper(text[i]))
            {
                text[i] = ((text[i] - 'A' + kj) % 26) + 'A';
            }
            else
            {
                text[i] = ((text[i] - 'a' + kj) % 26) + 'a';
            }
            position_k++;
        }
    }
    //ciphertext print
    printf("ciphertext: %s\n", text);
    
    return 0;
}
