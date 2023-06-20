#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);


int main(void)
{
    // Prompts user for text input
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    double L = letters / (float)words * 100;
    double S = sentences / (float)words * 100;

    // Coleman-Liau index for calculating reading grade
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print the relevant grade to the console
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int count = 0;

    //for each index of the string, if the character is between a-z (both lower & upper case), add 1 to the letter count
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
    int count = 0;

    // for each index of the string, if the character is a space add 1 to the word count
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count ++;
        }
    }

    // add 1 to the count total to include the final word
    return count + 1;
}

int count_sentences(string text)
{
    int count = 0;

    // for each index of the string, if the character is a period, exclamation or question mark, add 1 to the sentence count
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count ++;
        }
    }

    return count;
}
