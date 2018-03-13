#include<stdio.h>
void main()
{
	int n,i,count=0,s=1;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*2;
	if(s==n)
		count=1;
	}
	if(count==1)
	{
			printf("\nYES");
	}
	else
		printf("\nNO");
	
}
