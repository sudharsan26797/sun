#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,s;
printf("enter the number of s:");
scanf("%d",&n);
printf("Fibonacci series:");
for(i=1;i<=n;i++)
{
printf("%d",t1);
s=t1+t2;
t1=t2;
t2=s;
}
return 0;
}
