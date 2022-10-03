#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[9];
	char string[1001];
	scanf("%s",string);
	printf("%d\n",string[0]-48);
	for(int i = 0;i<1000;i++)
	{
		if(string[i]-48>=0 && string[i]-48<=9 && string[i]!="\0")
			num[string[i]-48] += 1; 
			
	}
	for(int i=0;i<9;i++)
	{
		if(i<8)
			printf("%d ",num[i]);
		else
			printf("%d",num[i]);	
	}
	system("PAUSE");
	return 0;	
}
