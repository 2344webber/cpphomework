#include<stdio.h>

int main()
{
	int input[9],mix;
	for(int i=0;i<9;i++)
		scanf("%d",&input[i]);
	for(int i=0;i<9;i++)
	{
		for(int j = 0;j<9-i;j++)
		{
			if(input[j]>input[j+1])
			{
				int tmp = input[j];
				input[j] = input[j+1];
				input[j+1] = tmp;
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		mix+=input[i];
		if(input[i]<1||input[i]>10)
		{
			printf("wrong input");
			return 0;
		}
	}
	printf("%d\n",mix);
	for(int i=0;i<9;i++)
	{
		if(i<8)
			printf("%d ",input[i]);
		else
			printf("%d",input[i]);	
	}
	return 0;
}
