#include<stdio.h>
void main()
{
int n,sum=0,i;
float avg;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
avg=sum/n;
printf("%d",avg);
}
