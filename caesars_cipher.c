#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int key=0;

int main(int argc,string argv[])
{

    // key processing
    string k=NULL;

    //checking for more than 2 arguments
    if(argc>2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if(argv[1]==NULL)
        {
             printf("Usage: ./caesar key\n");
             return 1;
        }
    else
        k=argv[1];

    //checking if the key is alphanumeric and decimal

    for(int i=0;k[i]!='\0';i++)
    {
        if(isalpha(k[i]))
        {
            printf("Usage: ./ceasar key\n");
            return 1;
        }
        else if(k[i]=='.')
        {
            printf("Usage: ./ceasar key\n");
           return 1;
        }
    }
    key=atoi(k);

    //checking if the key is -ve integer
    if(key<0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    //enciphering the recieved string

    string input=get_string("plaintext:\n");
    for(int i=0;i<strlen(input);i++)
    {
        //checking if the string is an alphabet
        if(isalpha(input[i]))
        {
          //checking if the string is uppercase
          if(isupper(input[i]))
          {
                //converting string's ith position to integer and adding key value
                input[i]=((unsigned int)input[i]+key);
                //checking if the given value exceeds 90 i.e. Z's ASCII value
                while((unsigned int)input[i]>=90)
                {
                    //if it does subtracting 26 untill the condition is false
                    input[i]=(unsigned int)input[i]-26;
                }
          }
          else
          {
               //similar as to uppercase letters
                input[i]=((unsigned int)input[i]+key);
                while((unsigned int)input[i]>=122)
                {
                    input[i]=(unsigned int)input[i]-26;
                }
          }

        }
    }

    printf("ciphertext: %s\n",input);

    return 0;
}
