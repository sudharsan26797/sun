#include<stdio.h>
int main()
{
int i,s=0,n=6,k,a[20]={1,2,3,4,5,6};
printf("enter k value");
scanf("%d",&k);
for(i=0;i<k;i++)
{
s=s+a[i];
}
printf("%d",s);
}
