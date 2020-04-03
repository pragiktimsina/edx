#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void)
{
    string s = get_string("Text: ");

    float letter_count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(isalnum(s[i]))
            letter_count++;
    }

    float word_count=0;
    for(int i=0;s[i]!='\0';i++)
    { if ((int) s[i] == 32)
            word_count++;
    }

    float sentence_count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.'|| s[i]=='?'||s[i]=='!')
            sentence_count++;
    }

    float L = letter_count/(word_count+1)*100;
    float S = sentence_count/(word_count+1)*100;

    float (index) = 0.0588 * L - 0.296 * S - 15.8;

    if (roundf(index)>=16)
        printf("Grade 16+\n");
    else if(roundf(index)<1)
        printf("Before Grade 1\n");
    else
        printf("Grade %.0f\n",roundf(index));
    return 0;
}
