#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);

int main(void)
{
    // Asks user for text and prints it to the console
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);

    printf("%s\n %i letters\n %i words\n", text, letters, words);
}

int count_letters(string text)
{
    int count = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            count++;
        }
    }

    return count;
}

int count_words(string text)
{

}
