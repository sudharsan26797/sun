#include<stdio.h>
void main()
{
	int n,i,count=0,j=1;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j*2;
	if(j==n)
		count=1;
	}
	if(count==1)
	{
			printf("\nYES");
	}
	else
		printf("\nNO");
	
}
