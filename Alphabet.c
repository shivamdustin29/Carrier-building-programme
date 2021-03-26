#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	if(n>=65 && n<=90)
	{
		printf("UPPER CASE");
	}
	else if(n>=97 && n<=122)
	{
		printf("lower case");
	}
	else if(n>=48 && n<=57)
	{
		printf("Number");
	}
	else
	{
		printf("Special");
	}
	return 0;
}
