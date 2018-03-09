#include<stdio.h>
int main()
{
int a[50],i,n,lar,sam;
printf("enter the elements %d",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
lar=sam=a[0];
for(i=0;i<n;i++)
{
if(a[i]>lar)
lar=a[i];
if(a[i]<sam)
sam=a[i];
}
printf("largest and smallest values is %d %d",lar,sam);
}
