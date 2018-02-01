#include <stdio.h>
int main()
{
char san;
printf("Input a character\n");
scanf("%c", &san);
if ((san >= 'a' && san <= 'z') || (san >= 'A' &&san <= 'Z'))
{
if (san=='a' || san=='A' || san=='e' || san=='E' || san=='i' || san=='I' || san=='o' || san=='O' || san== 'u' || san=='U')
printf("%c is a vowel.\n", san);
else
printf("%c is a consonant.\n", san);
}
else
printf("%c is neither a vowel nor a consonant.\n", san);
return 0;
}
