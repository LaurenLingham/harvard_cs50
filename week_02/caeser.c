#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]) 
{
    // check for correct number of arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // check key is positive integer
    for (int i=0; i < strlen(argv[1]); i++)
    {
        if(isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // convert key to integer
    int k = atoi(argv[i]);

    // request input from user then change to ciphertext
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    
    // 
}
