#include <stdio.h>
int main()
{
   int a, b, temp;
   printf("Enter the value of a and b\n");
   scanf("%d%d", &a, &b);
   printf("before swaping \na = %d\nb = %d\n",a,b);
   temp = a^b;
   a    = a^b;
   b    = temp;
   printf("after swaping\na = %d\nb = %d\n",a,b);
   return 0;
}
