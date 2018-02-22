#include<stdio.h>
#define MAX_SIZE 100
{
char str[100];
char *s=str;
int alphabets,degits,others;
alphabets=degits=others=0;
printf("enter the any string:");
gets(str);
while(*s)
{
if((*s>='a'&&*s<='z')||(*s>='A'&&*s<='z'));
alphabets ++;
else if((*s>='0'&&*s<='9');
degits ++;
else
others ++;
s ++;
}
printf("Alphabets=%d\n",alphabets);
printf("Degits=%d\n",degits);
printf("Others=%d\n",others);
return 0;
}
