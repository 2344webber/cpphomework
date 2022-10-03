#include <stdio.h>
#include <stdlib.h>
#define LEN 11

void change(char *string1)
{
    char s[]={"abcdefghijklmnopqrstuvwxyz"};
	char b[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  	for(int i=0;i<10;i++)
    {
      for(int j=0;j<26;j++)
      {
 		if(string1[i]==s[j])
          string1[i]=b[j];
        else if(string1[i]==b[j])
          string1[i]=s[j];     	
      }
    }
  	printf("%s",string1);
}

int main()
{
	char string1[LEN];
    scanf( "%s", &string1 );
  	change(string1);
    return 0;	
}
