#include<stdio.h>
#include<string.h> 
 
int main(void) 
{    
    unsigned char s[]={};
    printf("Enter a string");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
    	if(s[i]>='a' && s[i]<='z')
    	{
    		s[i]=(int) s[i]-32;
    		printf("%c",(char)s[i]);
    	}
    	else if ((char)s[i]>0)
    	{
    		printf("%c",(char)s[i]);
    	}
    	else
    		printf("%c",(char)s[i]);
    }
      
    return 0; 
}