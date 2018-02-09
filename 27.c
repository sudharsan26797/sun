#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2){
        printf ("Dont' forget to pass arguments!\n");
        return(-1);
    }

    printf ("You have executed the program : %s\n", argv[0]);

    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i],"--some_definite_parameter") == 0){
            printf("You have passed some definite parameter as an argument. And it is \"%s\".\n",argv[i]);
        }
        else if(strspn(argv[i], "0123456789") == strlen(argv[i])) {
            size_t big_digit = 0;
            sscanf(argv[i], "%zu%*c",&big_digit);
            printf("Your %d'nd argument conteins only digits, and it is a number \"%zu\".\n",i,big_digit);
        }
        else if(strspn(argv[i], "0123456789abcdefghijklmnopqrstuvwxyz./") == strlen(argv[i]))
        {
            printf("%s - this string might contein digits, small letters and path symbols. It could be used for passing a file name or a path, for example.\n",argv[i]);
        }
        else if(strspn(argv[i], "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == strlen(argv[i]))
        {
            printf("The string \"%s\" contains only capital letters.\n",argv[i]);
        }
    }
}
