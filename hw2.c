#include<stdio.h>

int sub(int);

int main()
{
	int input;
	scanf("%d",&input);
	if(input<0)
		printf("Input need to be positive integer.");
	else
		printf("%d",sub(input));
	return 0;
} 

int sub(int x)
{
	if(x==0) return 1;
	else return x*sub(x-1); 
}
