#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>

int key=0;

int process_key(int argc,string argv[]);

int main(int argc,string argv[])
{
    process_key(argc,argv);
    return 0;
}

int process_key(int argc,string argv[])
{
    string k=NULL;
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
    if(key<0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    return key;
}