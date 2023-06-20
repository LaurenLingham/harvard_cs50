#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Asks user for text and prints it to the console, along with number of letters, words & sentences
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    printf("%s\n %i letters\n %i words\n %i sentences\n", text, letters, words, sentences);
}

int count_letters(string text)
{
    int count = 0;

    //for each index of the string, if the character is between a-z (both lower & upper case), add 1 to the letter count
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            count++;
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
            count ++;
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
        count ++;
    }

    return count;
}
