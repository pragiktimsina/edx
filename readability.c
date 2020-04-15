#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void)
{
    string s = get_string("Text: ");

//counting the number of letters
    float letter_count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalnum(s[i]))
        {
            letter_count++;
        }
    }

//counting the number of words
    float word_count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((int) s[i] == 32)
        {
            word_count++;
        }
    }

//counting the number of sentences
    float sentence_count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            sentence_count++;
        }
    }

//counting the no. of letters per 100 words
    float L = letter_count / (word_count + 1) * 100;
//counting the no. of sentences per 100 words
    float S = sentence_count / (word_count + 1) * 100;
//computing Coleman-Liau index
    float (index) = 0.0588 * L - 0.296 * S - 15.8;
//printing the index to the user
    if (roundf(index) >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (roundf(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", roundf(index));
    }

    return 0;
}
