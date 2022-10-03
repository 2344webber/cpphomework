#include <stdio.h>

int main() 
{
	int n,mix;
	scanf("%d", &n); 
	while(n>0)
	{
		mix += n%10;
		n/=10;
	}
	printf("%d",mix);
	return 0;
}
