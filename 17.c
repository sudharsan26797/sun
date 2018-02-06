#include <stdio.h>

int main(void) {
	int a,b,c,d,e,f;
	printf("Enter the number");
	scanf("%d",&a);
	b=a/100;
	c=a%10;
	d=a/10;
	e=d%10;
	f=(b*b*b)+(c*c*c)+(e*e*e);
	if(a==f)
	{
	printf("arms %d",f);
	}
	else{
		printf("not arms%d",f);
	}
	
	return 0;
}
